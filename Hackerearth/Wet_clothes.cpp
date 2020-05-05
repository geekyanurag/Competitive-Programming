#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, m, g, count = 0;
    cin>>n>>m>>g;
    vector<int>time(n), clothes(m), t(n);
    for(int i =0; i<n; i++){
		cin>>time[i];
    }
	for(int i =0; i<n; i++){
		if(i == 0)
			t[i] = time[i];
		else
			t[i] = time[i] - time[i-1];
	}

    for(int i = 0; i<m; i++)
        cin>>clothes[i];
    sort(t.begin(), t.end(), greater<int>());
    if(t[0] == time[0])
	    t.erase(t.begin(), t.begin() + 1);
	for(int i =0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(clothes[j] <= t[i]){
				if(clothes[j] != -1)
					count++;
				clothes[j] = -1;
			}
		}
		if(g == (i + 1))
			break;
	}
	cout<<count<<endl;
}