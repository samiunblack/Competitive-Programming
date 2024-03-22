//https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    int n, h;
    cin >> n >> h;

    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if(a > h) cnt += 2;
        else cnt += 1;
    }

    cout << cnt << endl;
}