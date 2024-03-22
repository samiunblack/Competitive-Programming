//https://codeforces.com/contest/785/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, long long> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;   
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    int n;
    cin >> n;

    long long count = 0;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        count += mp[s];
    }

    cout << count;
}