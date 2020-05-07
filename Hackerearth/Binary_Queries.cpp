#include<bits/stdc++.h>
using namespace std;

// If question is asking even or odd check only the last bit of binary representation if 1 then odd otherwise even.
int main(){
    int n, t;
    cin>>n>>t;
    int arr[n];
    for(int i =0; i<n; i++)
        cin>>arr[i];
    for(int i =0; i<t; i++){
        int x;
        cin>>x;
        if(x == 1){
            int y;
            cin>>y;
            arr[y - 1] == 0 ? arr[y - 1] = 1 : arr[y - 1] = 0;
        }
        else{
            int y, z;
            cin>>y>>z;
            arr[z - 1] == 1 ? cout<<"ODD"<<endl : cout<<"EVEN"<<endl;
        }
    }
}