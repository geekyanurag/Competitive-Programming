#include<bits/stdc++.h>
using namespace std;

// Recursive way to find x to the power of n
int exponent(int x, int n){
    if(n == 0)
        return 1;
    return x * exponent(x, n - 1);
}

// Iterative way
int exponent1(int x, int n){
    int res = 1;
    while(n > 0){
        res *= x;
        n -= 1;
    }
    return res;
}
int main(){
    int x, n;
    cin>>x>>n;
    int res = exponent(x, n);
    cout<<res<<endl;
    int res1 = exponent1(x, n);
    cout<<res1<<endl;
}