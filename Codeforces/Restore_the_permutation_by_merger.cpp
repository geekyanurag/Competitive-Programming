#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        vector<int>res(n);
        for(int i = 1; i<=n; i++) mp[i] = 0;
        int j = 0;
        for(int i = 0; i<2*n; i++){
            int x;
            cin>>x;
            if(mp[x] == 0){
                res[j++] = x; 
                mp[x]++;
            }
        }

        for(int i = 0; i<n; i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
}