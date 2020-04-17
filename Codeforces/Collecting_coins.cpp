#include <bits/stdc++.h>
using namespace std;

void Coins(int x, int d)
{
    if (d < x)
    {
        cout << "NO" << endl;
    }
    else
    {
        if ((d - x) % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d, maxn, x;
        cin >> a >> b >> c >> d;
        maxn = max(max(a, b), c);
        if (a == b && b == c)
        {
            x = (2*c) - (b+a);
            Coins(x, d);
        }
        else
        {
            if (maxn == a)
            {
                x = 2 * a - b - c;
                Coins(x, d);
            }
            else if(maxn == b){
                x = 2 * b - a - c;
                Coins(x, d);
            }
            else if(maxn == c){
                x = 2 * c - b - a;
                Coins(x, d);
            }
        }
    }
}