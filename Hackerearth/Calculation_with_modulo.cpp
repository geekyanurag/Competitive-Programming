// To find a to the power b is divided by c and whole modulo m where gcd(c, m) = 1;
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

/*ll modInverse(ll a, ll m){
    a = a % m;
    for(ll i = 1; i<m; i++){
        if((a*i) % m == 1)
            return i;
    }
} */
ll d, x, y;
ll extEuclid(ll a, ll b){
    if(b == 0){
        d = a;
        x = 1;
        y = 0;
    }
    else{
        extEuclid(b, a % b);
        ll temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
}
ll modInverse(ll a, ll m){
    extEuclid(a, m);
    return ((x % m) + m) % m;
}

ll power(ll a, ll b, ll m){
    ll res = 1;
    while(b > 0){
        if(b % 2 == 1)
            res = ((res % m) * (a % m)) % m;
        a = ((a % m) * (a % m)) % m;
        b /= 2;
    }
    return res;
}
int main(){
    ll a, b, c, m;
    cin>>a>>b>>c>>m;
    ll x = modInverse(c, m);
    ll y = power(a, b, m);
    ll res = ((x % m) * (y % m)) % m;
    cout<<res<<endl;
}