#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);

        for(int i = 0; i<n; i++)
            cin>>v[i];
        int j = n-1;
        while(j > 0 && v[j-1] >= v[j]){
            j--;
        }
        while(j > 0 && v[j] >= v[j-1])
            j--;
        cout<<j<<endl;
    }
}