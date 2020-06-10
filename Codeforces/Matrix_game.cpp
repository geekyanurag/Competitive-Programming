#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        vector<pair<int,int>>v;
        cin>>n>>m;
        int arr[n][m];
        for(int i =0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin>>arr[i][j];
                if(arr[i][j] == 0)
                    v.push_back({i, j});
            }
        }
        int count = 0;
        for(auto i : v){
            int x = i.first;
            int y  = i.second;
            int row = 0, col = 0;
            for(int i =0; i<m; i++){
                if(arr[x][i] == 1)
                    break;
                else row++;
            }
            for(int i = 0; i<n; i++){
                if(arr[i][y] == 1)
                    break;
                else col++;
            }
            if(row == m && col == n){
                count++;
                arr[x][y] = 1;
            }
        }
        if(count & 1)
            cout<<"Ashish"<<endl;
        else cout<<"Vivek"<<endl; 
        
    }
}