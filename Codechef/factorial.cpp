#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
// Problem is to find the number of trailing zeroes of factorial of a number.
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        ll n, count = 0, x = 5;
        cin>>n;
        while(n > 0){
            count += floor(n / 5);
            n /= 5;
        }
        cout<<count<<endl;
    }
}