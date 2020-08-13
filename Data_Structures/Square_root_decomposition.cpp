#include<bits/stdc++.h>
using namespace std;

vector<int>a;
vector<int>b;
int len;

int query(int l, int r){
    int sum = 0;

    for(int i = l; i<=r; ){
        if(i % len == 0 && i + len - 1 <= r){
            sum += b[i / len];
            i += len;
        }
        else{
            sum += a[i];
            i++;
        }
    }
    return sum;
}

// Efficient Approach
int query1(int l, int r){
    int sum = 0;
    int x = l / len, y = r / len;

    if(x == y){
        for(int i = l; i<=r; i++)
            sum += a[i];
    }
    else{
        for(int i = l, end = (x + 1) * len - 1; i <= end; i++)
            sum += a[i];
        
        for(int i = x + 1; i<= y - 1; i++)
            sum += b[i];
        
        for(int i = y * len; i<=r; i++)
            sum += a[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    len = (int)sqrt(n) + 1;
    a.assign(n, 0);
    b.assign(len, 0);

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        a[i] = x;
    }

    for(int i = 0; i<n; i++){
        b[i / len] += a[i];
    }

    // Range Queries when first method is used
   /* int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int l, r;
        cin>>l>>r;
        int res = query(l, r);
        cout<<res<<endl;
    }
*/
    // Range Queries when second method is used
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int l, r;
        cin>>l>>r;
        int res = query1(l, r);
        cout<<res<<endl;
    }
}