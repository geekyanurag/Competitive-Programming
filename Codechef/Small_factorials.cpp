#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int length(int res[], int n, int m){
        int temp = 0;
        for(int j = 0; j<m; j++){
            int x = (res[j] * n) + temp;
            res[j] = x % 10;
            temp = x / 10;
        }
        while(temp > 0){
            res[m] = temp % 10;
            temp /= 10;
            m++;
        }
    return m;
}

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
    int res[200];
    res[0] = 1;
    int ans = 1, n;
    cin>>n;
    for(int i = 2; i<=n; i++)
        ans = length(res, i, ans);
    for(int i = ans-1; i>=0; i--)
        cout<<res[i];
    cout<<endl;
}
return 0;
}