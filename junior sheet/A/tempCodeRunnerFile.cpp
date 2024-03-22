//https://codeforces.com/contest/9/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    int mx = max(y, w);

    cout << 6 - mx << "/" << 6;
}