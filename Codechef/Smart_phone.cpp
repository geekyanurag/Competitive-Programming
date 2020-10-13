#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll t;
    cin>>t;
    vector<ll>v(t);
    for(int i =0; i<t; i++)
        cin>>v[i];
    ll res = -1;
    sort(v.begin(), v.end());
    for(int i =0; i<t; i++){
        if(v[i] * (t - i) > res)
            res = v[i] * (t - i);
    }
    cout<<res<<endl;
}