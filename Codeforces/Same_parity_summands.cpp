#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, b;
        cin>>a>>b;
        vector<int>v(b);
        if(a == b){
            cout<<"YES"<<endl;
            v.assign(b, 1);
            for(int j : v)
                cout<<j<<" ";
        }
        else if(b > a)
            cout<<"NO";
        else{
            int x = a / b;
            int y = a % b;
            if(y == 0){
                cout<<"YES"<<endl;
                v.assign(b, x);
                for(int j : v)
                    cout<<j<<" ";  
            }
            else{
                v.assign(b, x);
                v[0] += y;
                if(((v[0] & 1) && (v[1] & 1)) || ((v[0] % 2 == 0) && (v[1] % 2 == 0))){
                    cout<<"YES"<<endl;
                    for(int z : v)
                        cout<<z<<" ";
                }
                else{
                    if((v.size() - 1) % 2 == 0 && x != 1){
                        cout<<"YES"<<endl;
                        for(int z = 1; z < v.size(); z++){
                            if(z & 1)
                                v[z]--;
                            else
                                v[z]++;
                        }
                        for(int z : v)
                            cout<<z<<" ";
                    }
                    else 
                        cout<<"NO";
                }
            }
        }
        cout<<endl;
    }
}