#include<bits/stdc++.h>
using namespace std;

// This method is used to print all the prime numbers from 1 to N.
// Time Complexity - O(Nlog(logN))
void primes(int n){
    bool isPrime[n+1];
    // memset(isPrime, true, sizeof(isPrime));
    for(int i =0; i<=n; i++)
        isPrime[i] = true;
    
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i =2; i*i<=n; i++){
        for(int j = i * i ; j<=n; j+=i){
            if(isPrime[j])
                isPrime[j] = false;
        }
    }

    // Printing the results
    for(int i =0; i<=n; i++){
        if(isPrime[i])
            cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    primes(n);
    return 0;
}