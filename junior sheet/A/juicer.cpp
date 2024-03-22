//https://codeforces.com/contest/709/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int juice = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] <= b) juice += a[i];

        if(juice > d)
        {
            juice = 0;
            cnt++;
        } 
    }

    if(juice > d)
    {
        cnt++;
    }

    cout << cnt;
}