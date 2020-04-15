#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n, l = -1, r = -1, res = 1;
        cin>>n;
        ll a[n], b[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
            if(a[i] == 1 && l==-1)
                l = i;
            if(a[i] == -1 && r==-1)
                r = i;
        }
    
        for(int i = 0; i<n; i++){
            cin>>b[i];
            if(b[i] > a[i] && (l >= i || l==-1))
                res = 0;
            if(b[i] < a[i] && (r >=i || r==-1))
                res = 0;
        }
        if(res)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}