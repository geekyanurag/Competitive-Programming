#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// This is a method to find x to power of n but if n is large then we used this method. In this method we break the n into n/2 ie x square to the power of n/2.
// So when n is even n = n/2 and when n is odd then x * x to power of n -1 which will become even

// Recursive way for binary Exponentiation
int binaryExponentiation(int x, int n){
    if(n == 0)
        return 1;
    else if(n % 2 == 0)
        return binaryExponentiation(x * x, n / 2);
    else
        return x * binaryExponentiation(x * x, (n-1) / 2);
}

// Iterative way
int binaryExponentiation1(int x, int n){
    int res = 1;
    while(n > 0){
        if(n % 2 == 1)
            res *= x;
        x *= x;
        n /= 2;
    }
    return res;
}
// Storing results which are large enough such that cannot be stored in any datatype then we use modular exponentiation
int main(){
    int x, n;
    cin>>x>>n;
    int res = binaryExponentiation(x, n);
    cout<<res<<endl;
    int res1 = binaryExponentiation1(x, n);
    cout<<res1<<endl;
}