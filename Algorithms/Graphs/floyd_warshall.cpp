#include<bits/stdc++.h>
#define mx 100005
using namespace std;

typedef long long ll;
const int INF = 1000000009;
const int n = 5;       // Taking 5 vertices numbered from 0 to n-1 ie (0 - 4)

// This algorithm takes adj matrix as input which has input as if edge a to b with weight w then adj[a][b] = w then also adj[b][a] = w
// Then take distance matrix then fill the matrix and update the matrix
void floyd(int adj[][n]){
    int d[n][n];
    memset(d, 0, sizeof(d));
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i == j)
                d[i][j] = 0;
            else if(adj[i][j]) d[i][j] = adj[i][j];
            else
                d[i][j] = INF;
        }
    }

    for(int k = 0; k < n; k++){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(d[i][k] < INF && d[k][j] < INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    // Printing the distance matrix
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++)
            cout<<d[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int m;
    cin>>m;
    int adj[n][n];
    memset(adj, 0, sizeof(adj));
    for(int i =0; i<m; i++){
        int a, b, w;
        cin>>a>>b>>w;
        adj[a][b] = w;
        adj[b][a] = w; 
    }
    floyd(adj);
}