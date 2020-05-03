#include<bits/stdc++.h>
using namespace std;

// Naive Approach where it checks if numbers of divisors of a number is greater than 2 then not prime else prime.
// Time complexity - O(n)
bool isPrime(int n){
    if(n == 0)
        return false;
    int count = 0;
    for(int i =1 ; i<=n; i++){
        if(n % i == 0)
            count++;
    }
    return count == 2 ? true : false;
}

// Better Approach ie the loop will run till square root of n since the factor of a number <= sqrt(n)
// If n is divisible by d and d is less than sqrt(n) then (n/d) must be greater than sqrt(n)
// n is also divisible by (n/d);

// Time Complexity - O(sqrt(n))
bool isPrime1(int n){
    if(n == 0)
        return false;
    int count = 0;
    for(int i =1; i*i <= n; i++){
        if(n % i == 0){
            if(i * i == n)
                count++;
            else         // case when i < sqrt(n) and (n / i) > sqrt(n)
                count += 2;
        }
    }
    return count == 2 ? true : false;
}
// isPrime1 method can also be written without using count 
bool isPrime1Modified(int n){
    if(n == 0 || n == 1)
        return false;
    for(int i = 2; i * i<=n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    bool res = isPrime(n);
    bool res1 = isPrime1(n);
    bool res2 = isPrime1Modified(n);
    cout<<res<<" "<<res1<<" "<<res2<<endl;
    return 0;
}