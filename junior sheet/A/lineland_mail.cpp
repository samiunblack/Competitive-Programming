//https://codeforces.com/contest/567/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];


    for(int i = 0; i < n; i++)
    {
        int mn, mx;
        if(i == 0)
        {
            mn = abs(a[i + 1] - a[i]);
            mx = abs(a[n - 1] - a[i]);
        }
        else if(i == n - 1)
        {
            mn = abs(a[i] - a[i - 1]);
            mx = abs(a[i] - a[0]);
        }
        else
        {
            mn = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            mx = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
        }

        cout << mn << " " << mx << endl;
    }
}