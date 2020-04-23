#include<bits/stdc++.h>
using namespace std;

int main(){
    // For fast input and output and for reducing the time complexity use below two codes for CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ////////////////////////////////////////////////////////////
    
    //Setting all the values of an array or vector
    int arr[4];
    memset(arr, 0, sizeof(arr));   // we can take set 0 or -1 for integral values;
    char s[] = "anurag";
    memset(s, 't', sizeof(s));     //Setting for string as t;
    
    //////////////////////////////////////////
    int n;
    cin>>n;
    vector<int>v(n, 0), t(n, 0); //initializing more than one variable in vector;
    for(int i =0; i<v.size(); i++)
        cout<<v[i]<<" ";
    ///////////////////////////////////////////////

    //vector of vectors taking input and output
    int n;
    cin>>n;
    vector<vector<int>>z(n);
    for(int i =0; i<n ;i++){
        int x, y;
        cin>>x>>y;
        z[i].push_back(x);
        z[i].push_back(y);
    }
    //for printing the vector of vectors
    for(int i = 0; i<n; i++){
        for(int j = 0; j<z[i].size(); j++){
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }
    //or u can do 
    for(int i = 0; i<n; i++){
        for(int j : z[i])
            cout<<j<<"\n";
    }
    ///////////////////////////////////

    //string reverse
    string q;
    cin>>q;
    int k ;
    cin>>k;
    reverse(q.begin(), q.begin() + k);
    reverse(q.begin() + k , q.end());
    cout<<q<<endl;
    reverse(q.begin(), q.end());
    cout<<q;
    // reverse from backwards
    reverse(q.rbegin(), q.rend());

    ////////////////////////////////////

    // Accessing map elements using for each loop
    unordered_map<int,int>mp;
    for(auto i : mp)
            cout<<i.first<<" "<<i.second<<endl;
    
    // Different sorting algorithms stl
    vector<int>v;
    sort(v.begin(), v.end());
    partial_sort(v.begin(), v.begin() + 3, v.end());
    stable_sort(v.begin(), v.end());

    // New stl bitset only contains 0 or 1 and indexing from back and inside <> this fixed size should be given- eg 5 = 00000
    bitset<5>bt;
    bt.count(); // count the no of set bits
    bt.size(); // total no. of values inside
    bt.test(3); // returns 1 if bit is set else return 0
    bt.any(); // returns true if atleast 1 bit is set else return false
    bt.set() ;// set all the bits
    bt.none() ;// returns true if none of the bits is set
    bt.set(4 , 0); //bt[4] = 0
    bt.flip() ;// flip all the bits
    bt.reset() ;// reset all the bits
    
    ////////////////////
    vector<int>v(n);
    v.assign(n, 0);

    /////////////////////////

    //input the graph having weights
    vector<vector<pair<int,int>>>adj;
    // or 
    vector<pair<int,int>>adj[100005];
    // given u, v, w where u = source vertex, v = destination vertex and w = edge weight and loop through the no of edges ie e;
    int e; // no. of edges
    for(int i =0; i<e; i++){
        int u, v, w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    
    ///////////////////////////////////////////////

    // structures
    struct edge{
        int a, b, w;       // inside structures members are there and these members are only declared not initialized.
        char x, y;
        int arr[4];
        void printfunc(){
            cout<<a<<b<<w;
        }
    };

    void testing (){
        edge q;
        q.a = 3;
        q.y = 'a';
        edge b[5];     // can create array of structures
        b.a = 4;

        // can create vector of edges
        vector<edge>v;
        v.push_back({1, 2, 4});
        for(auto i : v){
            cout<<i.a<<" "<<i.b<<" "<<i.w;
    }

    ///////////////////////////////////////

    vector<int>v(3);
    v[0] = 1;
    for(int &i : v)  //  the & in loop will be there if you want to modify the vector if & is not there then changes made in that loop will not visible to original vector.
        i = 2;
    for(int i : v)
        cout<<i;
}