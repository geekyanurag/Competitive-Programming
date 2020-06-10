#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        ll n, res;
        cin>>n;
        for(int j = 2; j<= 29; j++){
            ll x = 1 << j;
            if(n % (x - 1) == 0){
                res = n / (x - 1);
                break;
            }
        }
        cout<<res<<endl;
    }
}