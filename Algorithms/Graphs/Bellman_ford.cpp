#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1000000000;
struct edge{
    int a, b, w;
};

void bellman(int n, int m, int s, vector<edge>e){
    vector<int>d (n, INF);
    d[s] = 0;
    
    for(int i =0; i<n-1; i++){
        for(int j = 0; j<m; j++){
            if(d[e[j].a] < INF)
                d[e[j].b] = min(d[e[j].b], d[e[j].a] + e[j].w);
        }
    }

    for(int i =0; i<n; i++){
        cout<<d[i]<<" ";
    }
}

int main(){
    int n, m, s;
    cin>>n>>m>>s;
    vector<edge>e (m);
    for(int i =0; i<m; i++){
        int x, y, z;
        cin>>x>>y>>z;
        e[i].a = x;
        e[i].b = y;
        e[i].w = z;
    }
    bellman(n, m, s, e);
}