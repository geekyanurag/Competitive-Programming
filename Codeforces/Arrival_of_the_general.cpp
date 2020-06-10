#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int minm = INT_MAX, maxn = INT_MIN, min_idx, max_idx, res = 0;
    vector<int>arr (n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
        minm = min(arr[i] , minm);
        maxn = max(arr[i], maxn);
    }

    for(int i = 0 ; i<n; i++){
        if(arr[i] == maxn){
            max_idx = i;
            break;
        }
    }

    for(int i =n-1; i>=0; i--){
        if(arr[i] == minm){
            min_idx = i;
            break;
        }
    }
    if(max_idx < min_idx){
        res = max_idx + (n - min_idx-1);
    }
    else if(max_idx > min_idx){
        res = max_idx + (n - min_idx - 2);
    }

    cout<<res<<endl;
}