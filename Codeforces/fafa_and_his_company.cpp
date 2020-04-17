#include<bits/stdc++.h>
using namespace std;

int divCount(int n){
    bool isPrime[n+1];
    memset(isPrime, true, sizeof(isPrime));
    for(int i = 2; i*i <= n; i++){
        if(isPrime[i] == true){
            for(int j = i*i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    int total = 1;
    for(int i =2; i<=n; i++){
        if(isPrime[i]){
            int count = 0;
            if(n % i == 0){
                while(n % i == 0){
                    n /= i;
                    count++;
                }
            }
            total *= (count + 1);
        }
    }
    return total;
}

int main(){
    int n;
    cin>>n;
    int res = divCount(n);
    cout<<res - 1;
    return 0;
}