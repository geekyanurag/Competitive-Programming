#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k =0; k<t; k++){
        int n, res = 0;
        cin>>n;
        for(int j =0; j<n; j++){
            int i, n, q;
            cin>>i>>n>>q;
            if(n % 2 == 0){
                res = n / 2;
            }
            else{
                if(i == 1){
                    if(q == 1)
                        res = n / 2;
                    else 
                        res = (n /2) + 1;
                }
                else{
                    if(q == 1)
                        res = (n / 2) + 1;
                    else 
                        res = n /2;
                }

            }
            cout<<res<<endl;
        }
    }
}