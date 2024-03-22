//https://codeforces.com/contest/686/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    long long cnt = 0;

    for(long long i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        long long a;
        cin >> a;

        if(s == "+") x += a;
        if(s == "-")
        {
            if(a <= x) x -= a;
            else cnt++;
        }
    }

    cout << x << " " << cnt;
}