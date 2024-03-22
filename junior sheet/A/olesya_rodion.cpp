//https://codeforces.com/contest/584/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string ns = to_string(n);
    string ts = to_string(t);

    if(n == 1 && ts.size() > 1) cout << -1;
    
    else
    {
        string s = ts;

        for(int i = ts.size(); i < n; i++)
        {
            s += "0";
        }

        cout << s;
    }
}