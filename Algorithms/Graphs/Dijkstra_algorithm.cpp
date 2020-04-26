#include<bits/stdc++.h>
#define mx 100005
using namespace std;

typedef long long ll;
const int INF = 1000000000;
vector<pair<int,int>>adj[100005];

// Dijkstra's algo visits the minimum weight node from source first and then visits all the node from that node with following manner ie using min weight edge from the current node.
// Priority queue is used because it will have the connected nodes from source in a sorted manner(descending). So the top element in queue will be the min weight node
// we take pair as first element as weight and then node because in pair sorting takes place by first comparing the pair first element then the second one.
void dijkstra(int s, vector<int> &d, vector<int> &p){
    d.assign(mx, INF);
    p.assign(mx, -1);
    d[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
    q.push({0, s});
    while(!q.empty()){
        int v = q.top().second;
        q.pop();
        for(auto edge : adj[v]){
            int u, w; 
            u = edge.second;
            w = edge.first;
            if(d[v] + w < d[u]){
                d[u] = d[v] + w;
                p[u] = v;
                q.push({d[u], u});
            }
        }
    }
}

int main(){
    int n, s;
    cin>>n>>s;
    for(int i =0; i<n; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
    vector<int>d (mx), p(mx);
    dijkstra(s, d, p);
    for(int i =0; i<mx; i++){
        if(!adj[i].empty())
            cout<<d[i]<<" ";
    }
}