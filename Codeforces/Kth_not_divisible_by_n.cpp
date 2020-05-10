#include<bits/stdc++.h>
#define mx 1000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n,k;
        cin>>n>>k;
        long long low = 1, high = 2e18;   // 1e5 means 1 * pow(10, 5) , 2e5 means 2 * pow(10, 5)
        while(low < high){
            int mid = (low + high) / 2;
            int count = mid - (mid / n);
            if(count >= k)
                high = mid;
            else
                low = mid + 1;
        }
        cout<<low<<endl;
    }
}