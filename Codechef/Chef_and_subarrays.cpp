#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        ll n, sum, product, cnt = 0;
        cin>>n;
        vector<ll>v(n);
        for(int i =0; i<n ;i++){
            cin>>v[i];
        }
        for(int i = 0; i<n; i++){
            sum = 0;
            product = 1;
            for(int j = i; j<n; j++){
                sum += v[j];
                product *= v[j];
                if(sum == product)
                    cnt += 1;
            }
        }
        cout<<cnt<<endl;
    }
}