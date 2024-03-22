//https://codeforces.com/contest/43/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        mp[s] += 1;
    }

    string mxs;
    int mx = -1;

    for(auto x: mp)
    {
        if(x.second > mx)
        {
            mx = x.second;
            mxs = x.first;
        }
    }

    cout << mxs;
}