#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t ; i++){
        int n,m, p = 1;
        cin>>n>>m;
        unordered_map<int,int>mp;
        for(int i =0; i<m; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(int i =0; i<n; i++){
            if(mp.find(i+1) == mp.end()){
                if(p){
                    cout<<i+1<<" ";
                    mp[i+1]++;
                }
                p = !p;
            }
        }
        cout<<endl;
        for(int i =0; i<n; i++){
            if(mp.find(i+1) == mp.end())
                cout<<i+1<<" ";
        }
        cout<<endl;
    }
}