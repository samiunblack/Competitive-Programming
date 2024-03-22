//https://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    int curr = 'a';

    for(int i = 0; i < s.size(); i++)
    {
        int l = abs((s[i] - 'a' + 1) - (curr - 'a' + 1));
        int r = abs(26 - l);

        curr = s[i];
        cnt += min(l, r);
    }

    cout << cnt;
}