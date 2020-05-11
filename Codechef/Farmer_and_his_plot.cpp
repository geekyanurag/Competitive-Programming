#include<bits/stdc++.h>
using namespace std;

// given a rectangular plot. Divide it in square plots such the no. of square plots is minimum.
int main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int a, b;
        cin>>a>>b;
        int x = __gcd(a,b);
        a /= x;
        b /= x;
        cout<<a*b<<endl;
    }
}