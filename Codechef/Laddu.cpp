#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        ll a, count = 0, res;
        string st;
        cin>>a>>st;
        for(int j = 0; j<a; j++){
            string s;
            cin>>s;
            if(s == "TOP_CONTRIBUTOR")
                count += 300;
            else if(s == "CONTEST_HOSTED")
                count += 50;
            else if(s == "CONTEST_WON"){
                int z;
                cin>>z;
                count += 300;
                if(z < 20)
                    count += (20 - z);
            }
            else if(s == "BUG_FOUND"){
                int z;
                cin>>z;
                count += z;
            }
        }
        if(st == "INDIAN")
            res = count / 200;
        else 
            res = count / 400;
        cout<<res<<endl;
    }
}