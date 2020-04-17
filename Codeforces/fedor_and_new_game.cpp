#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, res = 0;
    cin>>n>>m>>k;
    vector<int>v(m + 1);
    for(int i =0; i<=m; i++)
        cin>>v[i];
    for(int i = 0; i<m; i++){
        int diff, count = 0;
        diff = v[i] ^ v[m];
        count = __builtin_popcount(diff);
        if(count <= k)
            res += 1;
    }
    cout<<res<<endl;
}