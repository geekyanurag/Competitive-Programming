#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n, k, m, count = 0, cnt = 0;
        cin>>n>>k>>m;
        unordered_map<int,int>mp;
        for(int i =0; i<k; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(int i = 0; i<m; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto i : mp){
            if(i.second >= 2)
                count++;
        }
        for(int i =1; i<=n; i++)
            if(!mp[i])
                cnt++;
        cout<<count<<" "<<cnt<<endl;
    }
}