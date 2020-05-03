#include<bits/stdc++.h>
using namespace std;

// (a.b) = 1 then b is the multiplicative inverse of a.
// (a.b) % m = 1 then b is the modular multiplicative inverse of a (you have a and m and you have to find b) and (a/b) % m can also be found.
// b should be in range (1, m-1) since ((a % m)*(b % m)) % m , this equation have b % m so if must lie between 1 to m-1 and gcd(a, m) = 1 ie a and m is coprime.

// Method - 1
int modInverse(int a, int m){
    a = a % m;
    for(int i =1; i<m; i++){
        if((a*i) % m == 1)
            return i;

    }
}

// Method - 2 ie we can use extended euclid's algo as gcd(a, m) = 1 and a and m is given.
int gcd, x, y;
int extEuclid(int a, int b){
    if(b == 0){
        gcd = a;
        x = 1;
        y = 0;
    }
    else{
        extEuclid(b, a%b);
        int temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
}
int modInverse1(int a, int m){
    extEuclid(a, m);
    return ((x % m)+m) % m;    // x may be negative
}

// Method - 3 Using fermat's little theorem (used only when m is prime)
// It states that if p is prime then for any integer a, a to the power p - a is a integer multiple of p
// eg - p = 3 and a = 2 then 2 to the power 3 = 8 - 2 = 6 which is a integer multiple of p ie p * 2 = 6

// So a to the power of m - 1 is congruent to 1 (mod m) then both sides with inverse of a so inverse of a = a to power m-2 (mod m)
// So calculate the modular exponentiation for a, m-2 .
int modExponent(int a, int b, int m){
    int res = 1;
    while(b > 0){
        if(b % 2 == 1)
            res  = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}
int modInverse2(int a , int m){
    return modExponent(a, m -2, m);
}
int main(){
    int a, m;
    cin>>a>>m;
    int res = modInverse(a, m);
    int res1 = modInverse1(a, m);
    int res2 = modInverse2(a, m);
    cout<<res<<" "<<res1<<" "<<res2<<endl;
}