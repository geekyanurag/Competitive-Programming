#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x, y, z;
        cin>>x>>y>>z;
        ll maxn = max({x, y, z});
        int cnt = 0;
        if(x == maxn) cnt++;
        if(y == maxn) cnt++;
        if(z == maxn) cnt++;
        if(cnt <2) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            if(cnt > 2){
                for(int i = 0; i<3; i++)
                    cout<<maxn<<" ";
                cout<<endl;
            }
            else {
            ll minm = min({x, y, z});
            cout<<maxn<<" "<<minm<<" "<<"1"<<endl;
            }
        }
    }
}