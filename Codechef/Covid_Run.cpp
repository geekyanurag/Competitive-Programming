#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, x, y;
        cin>>n>>k>>x>>y;
        int res = 0;
        for(int i = 0; i<=n; i++){
            if((x + (i * k)) % n == y){
                res = 1;
                break;
            }
        }
        res == 1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}