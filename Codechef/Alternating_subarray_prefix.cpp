#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        int dp[n], arr[n];
        for(int i =0; i<n; i++)
            cin>>arr[i];
        dp[n-1] = 1;
        for(int i = n-2; i>=0; i--){
            if((arr[i] < 0 && arr[i+1] < 0) || (arr[i] > 0 && arr[i+1] > 0))
                dp[i] = 1;
            else
                dp[i] = dp[i+1] + 1;
        }
        for(int i=0; i<n; i++)
            cout<<dp[i]<<" ";
        cout<<endl;
    }
}