#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// In this method we take mod with a large no. say m in each step so that the no. will lie in range of datatype

// Recursive way
int modExponentiation(int x, int n, int m){
    if(n == 0)
        return 1;
    else if(n % 2 == 0)
        return modExponentiation((x*x) % m , n/2, m);
    else
        return (x * modExponentiation((x*x) % m , (n-1) / 2, m)) % m;
}

// Iterative way
int modExponentiation1(int x, int n, int m){
    int res = 1;
    while(n > 0){
        if(n % 2 == 1)
            res = (res * x)  % m;
        x = (x * x) % m;
        n = n / 2;
    }
    return res;
}

int main(){
    int x, n, m;
    cin>>x>>n>>m;
    int res = modExponentiation(x, n, m);
    int res1 = modExponentiation1(x, n, m);
    cout<<res<<" "<<res1<<endl;
}