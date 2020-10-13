#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k, ans = 0, x = 0;
        cin>>n>>k;
        vector<ll>arr(n);
        for(int i = 0; i<n; i++)
            cin>>arr[i];
        for(int i = 0; i<n; i++){
            x += arr[i];
            if(x < k){
                ans = i + 1;
                break;
            }
            x -= k;
        }
        if(x >= 0 && ans == 0){
            x += k;
            ans = (x / k) + n;
        }
        cout<<ans<<endl;
    }
}