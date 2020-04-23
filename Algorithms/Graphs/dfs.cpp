#include<bits/stdc++.h>
#define mx 100005
using namespace std;

typedef long long ll;
vector<int>adj[mx];
vector<bool>vis (mx, false);

void dfs(int u){
    vis[u] = true;
    cout<<u<<" ";
    for(int i : adj[u]){
        if(!vis[i])
            dfs(i);
    }
}

int main(){
    int v, n;
    cin>>v>>n;
    for(int i =0; i<n; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i =0; i<v; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    return 0;
}