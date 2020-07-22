#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, m;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i].first;
        a[i].second = false;
    }
    cin>>m;
    vector<pair<int,int>>b(m);
    for(int i = 0; i<m; i++){
        cin>>b[i].first;
        b[i].second = false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int x = abs(a[i].first - b[j].first);
            if(((x == 0) || (x == 1)) && b[j].second == false && a[i].second == false){
                cnt++;
                b[j].second = true;
                a[i].second = true;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}