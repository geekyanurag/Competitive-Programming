#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        vector<ll>v(n);
        ll count = 0, len = 1;
        for(int i =0; i<n; i++)
            cin>>v[i];

        for(int i = 0; i<n-1; i++){
            if(v[i+1] < v[i]){
                count += (len * (len + 1)) >> 1;
                len = 1;
            }
            else len++;
        }
        if(len >= 1) count += (len * (len + 1)) >> 1;
        cout<<count<<endl;
    }
}