#include<bits/stdc++.h>
using namespace std;

// Euler totient function is used to calculate the no. of primes which is coprime with the number n ie gcd(a, n) = 1.
// The function is n * (1-(1/a)) * (1-(1/b))....   where a and b are primes whose gcd with n is 1.
int coprimes(int n){
    int res = n;
    for(int i =2; i*i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            res -= res/i;   // Since n*(1-(1/a)) can be written as n - n/a
        }
    }
    if(n > 1){
        res -= res / n;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int ans = coprimes(n);
    cout<<ans<<endl;
    return 0;
}