#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// finding the coeff of a, b such that a*x + b*y = gcd(a, b);
// trick is a % b can be written as a - floor(a/b) * b
// The modified formula is b * (x1 - (a/b) * y1) + a * y1 = gcd(a, b);

int d, x, y;
void extEuclid(int a, int b){
    if(b == 0){
        d = a;
        x = 1;
        y = 0;
    }
    else{
        extEuclid(b, a % b);
        int temp = x;
         x = y;
         y = temp - (a / b) * y;
    }
}

int main(){
    int a, b;
    cin>>a>>b;
    extEuclid(a, b);
    cout<<x<<" "<<y<<endl;
}