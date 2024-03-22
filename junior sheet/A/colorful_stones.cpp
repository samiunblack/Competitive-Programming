//https://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int j = 0;

    for(int i = 0; i < t.size(); i++)
    {
        if(s[j] == t[i])
        {
            j++;
        } 
    }

    cout << j + 1;
}