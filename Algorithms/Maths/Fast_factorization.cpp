#include<bits/stdc++.h>
using namespace std;

// Naive approch to find factorize a number 
vector<int> factorize(int n){
    vector<int>v;
    for(int i = 2; i*i <=n ; i++){
        while(n % i == 0){
            v.push_back(i);
            n /= i;
        }
    }
    if(n != 1)
        v.push_back(n);
    return v;
}

// Method -2 Using sieve to store the minimum prime no which divides that number
vector<int> factorize1(int n){
    int minm[n + 1];
    // memset(minm, 0, sizeof(minm));
    for(int i =0; i<=n; i++)
        minm[i] = 0;
    for(int i =2; i*i <=n; i++){
        if(minm[i] == 0){
        for(int j = i*i ; j<=n; j+=i){
            if(minm[j] == 0)
                minm[j] = i;
            }
        }
    }
    for(int i = 2; i<=n; i++)     // This is for storing the prime number in that number like the minimum prime no. that divides that prime no. is itself like for 5 the minm[5] = 5.
        if(minm[i] == 0)
            minm[i] = i;
    
    vector<int>res;
    while(n != 1){
        res.push_back(minm[n]);
        n /= minm[n];
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>res = factorize(n);
    vector<int>res1 = factorize1(n);
    for(int i : res)
        cout<<i<<" ";
    cout<<endl;
    for(int i : res)
        cout<<i<<" ";
}