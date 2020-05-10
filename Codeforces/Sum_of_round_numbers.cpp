#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t ; i++){
        int n, x = 0;
        vector<int>v;
        cin>>n;
        while(n > 0){
            int r = n % 10;
            if(r != 0){
                int y = pow(10, x);
                v.push_back(r *  y);
            }
            x++;
            n /= 10;
        }
        //reverse(v.begin(), v.end());
        cout<<v.size()<<endl;
        for(int a : v)
            cout<<a<<" ";
        cout<<endl;
    }
}