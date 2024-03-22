//https://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    char cur = s[0];
    int cnt = 0;

    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == cur) cnt++;
        else cur = s[i];
    }

    cout << cnt;
}