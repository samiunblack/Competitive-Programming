//https://codeforces.com/contest/791/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int cnt = 0;

    while(b >= a)
    {
        cnt++;
        a *= 3;
        b *= 2;
    }

    cout << cnt;
}