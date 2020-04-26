#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1000000000;
// we take structure as a node because we have to know the current vertex , the previous vertex from which we came (a, b) and the edge weight.
struct edge{
    int a, b, w;
};

// This algo will update the vertex of all the connected nodes with source and finds minimum from that node to other node ie from source to some vertex a 
//then to other vertex b so min dist from source to b and update the weight.
void bellman(int n, int m, int s, vector<edge>e){
    vector<int>d (n, INF);
    d[s] = 0;
    
    for(int i =0; i<n-1; i++){           // Since we know the source node of node so it will be easier to implement and is done in 2 loops only, otherwise we have to take 3 loops another for vertices also.
        for(int j = 0; j<m; j++){       // j loops to the no. of edges ie m
            if(d[e[j].a] < INF)
                d[e[j].b] = min(d[e[j].b], d[e[j].a] + e[j].w);
        }
    }

    for(int i =0; i<n; i++){
        cout<<d[i]<<" ";
    }
}

int main(){
    int n, m, s;  // It contains the vertices numbered from 0 to n-1 where n is no. of vertices
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