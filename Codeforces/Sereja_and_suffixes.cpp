#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int>v(n);
    vector<ll>count(n, 0);
    unordered_map<int,int>mp;
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    count[n-1] = 1;
    mp[v[n-1]]++;
    for(int i = n-2; i>=0; i--){
        if(mp.find(v[i])!=mp.end())
            count[i] = count[i+1];
        else{
            mp[v[i]]++;
            count[i] += count[i+1] + 1;
        }
    }
    for(int i =0; i<m; i++){
        int x;
        cin>>x;
        cout<<count[x-1]<<endl;
    }
}