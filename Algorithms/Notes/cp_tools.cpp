#include<bits/stdc++.h>
#define mx 100005
#define INF 1000000009
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef unordered_map<int,int> uii;

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
    vector<vector<int>>vec(n);  // or 
    //vector<int>vec[n];
    for(int i =0; i<n ;i++){
        int x, y;
        cin>>x>>y;
        vec[i].push_back(x);
        vec[i].push_back(y);
    }
    //for printing the vector of vectors
    for(int i = 0; i<n; i++){
        for(int j = 0; j<vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    //or u can do 
    for(int i = 0; i<n; i++){
        for(int j : vec[i])
            cout<<j<<"\n";
    }
    ///////////////////////////////////

    //string reverse
    string st;
    cin>>st;
    int k ;
    cin>>k;
    reverse(st.begin(), st.begin() + k);
    reverse(st.begin() + k , st.end());
    cout<<st<<endl;
    reverse(st.begin(), st.end());
    cout<<st;
    // reverse from backwards
    reverse(st.rbegin(), st.rend());

    ////////////////////////////////////

    // Accessing map elements using for each loop
    uii mp;
    for(auto i : mp)
            cout<<i.first<<" "<<i.second<<endl;
    
    // Different sorting algorithms stl
    vector<int>v;
    sort(v.begin(), v.end());
    partial_sort(v.begin(), v.begin() + 3 , v.end());
    stable_sort(v.begin(), v.end());

    // New stl bitset only contains 0 or 1 and indexing from back and inside <> this fixed size should be given- eg 5 = 00000
    bitset<5>bt;
    bt.count(); // count the no of set bits
    bt.size(); // total no. of values inside
    bt.test(3); // returns 1 if bit is set else return 0
    bt.any() ;// returns true if atleast 1 bit is set else return false
    bt.set() ;// set all the bits
    bt.none(); // returns true if none of the bits is set
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
    int e ;  // no. of edges
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

    int main(){
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

    ////////////////////////////////////////////
    
    //using upper_bound and lower_bound
    // upper_bound will give the first element's index which is greater than the value and the elements are sorted in the given range
    vector<int>vec = {2, 3, 5, 7, 9};
    int upper1 = upper_bound(vec.begin(), vec.end(), 4) - vec.begin();  // in vector we subtract the starting iterator
    cout<<upper1<<endl;
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int upper2 = upper_bound(arr, arr + n, 4) - arr;   
    cout<<upper2;

    //for lower_bound it will give the elements's index which is equal to or just greater than the value given
    int lower1 = lower_bound(vec.begin(), vec.end(), 8) - vec.begin();
    cout<<lower1<<endl;
    int lower = lower_bound(arr, arr + n, 4) - arr;

    // for negative iterations use like this
    int n = -3;
    for(int i = n; i <0; i++)
        cout<<i<<" ";
    
    // string to integer
    string s = "101";
    int x = 0;
    for(int i = 0; i<s.length(); i++){
        int y = s[i] - '0';   // This is used because 1 and 0 in ascii is 49 and 48 so (49 - 48) is 1 
        x += (y * pow(10, (s.length() -i - 1)));
    }
    string z = "cba";
    int q = z[i] - 'a';   // ascii of a is 97 and c is 99 so (99 - 97) = 2

    // Integer to string 
    int x = 3;
    string y = to_string(x);

    ///////////////////////////////////////////////

    // In string we use .begin() and .end()
    string s = "anurag";
    sort(s.begin(), s.end());

    /////////////////////////////////////////////
    // for each loop in map
    map<int,int>mp;
    for(auto i : mp)
        cout<<i.first<<" "<<i.second<<endl;       // we use (.) dot for accessing elements unlike ->
     ///////////////////////////////////////////
    //sorting vector in descending order
    sort(v.begin(), v.end(), greater<int>());
    //sorting priority queue in increasing order
    priority_queue<int, vector<int>, greater<int>>p;

    //////////////////////////////////////////////////
    
    // To convert char to string
    char c = 'a';
    string x(1, c);  // this will make x as string with 1 value of c ie string x(n, c) n = no.of times c appears in string
    // or can use string stream
    stringstream ss;
    char c = 'a';
    string s;
    ss << c;
    ss >> s;
    cout<<s;
    // or just make it equal to string
    char c = 'a';
    string s;     // Don't use string s = c; it will give an error
    s = c;
    cout<<s;
    // or can use push_back
    string s;
    char c = 'a';
    s.push_back(c);
    cout<<s;
    // use + operator
    char c = 'a';
    string x;
    x += c;
    cout<<x;

    ////////////////////////////////////////////////////////////////////////

    // Conversion of string to integer
    //use stoi
    string s = "123";
    int x = stoi(s);
    // or use stringstream which have a function geek
    string s = "123";
    stringstream geek(s);  //geek is a already built function
    int x = 0;
    geek>>x;
    cout<<x + 4;

    ////////////////////////////
    //no. of bits in an integer
    int x = 3;
    cout<<__builtin_popcount(x);  // No. of set bits(ie no. of zeroes in its binary representation) in an integer
    cout<<__builtin_clz(x);       // No.  of leading zeroes in binary
    cout<<__builtin_ctz(x);       // No. of trailing zeroes in binary
    cout<<__builtin_parity(x);    // No. of one's in its binary representation , if odd then parity is 1 and 0 for even

    //////////////////////////////////////////////////////////

    // comparision function in sort function can be written like this:
    bool comparision(int a, int b){
    return __builtin_popcount(a) <= __builtin_popcount(b) && (a < b);
    }
    int main(){
        vector<int>v = {1024,512,256,128,64,32,16,8,4,2,1};
        sort(v.begin(), v.end(), comparision);
        for(int i : v)
            cout<<i<<" ";
    
    }

    ///////////////////////////////////////////////////////////
    // To find the index of the first occurence of a character in string
    string s = "anurag";
    auto i = s.find('r');
    cout<<i<<endl; 
    // to count the no. of occurences of a character in string
    string s = "leetcode";
    cout<<count(s.begin(), s.end(), 'e');
}