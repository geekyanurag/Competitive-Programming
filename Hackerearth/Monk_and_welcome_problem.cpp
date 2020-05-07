#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin>>n;
    vector<int>a(n), b(n), c(n);
    for(int i =0; i<n; i++)
        cin>>a[i];
    for(int j = 0; j<n; j++)
        cin>>b[j];

    for(int i =0; i<n; i++)
        c[i] = a[i] + b[i];
    for(int i =0; i<n; i++)
        cout<<c[i]<<" ";
    return 0;
}