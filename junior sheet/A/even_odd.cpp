//https://codeforces.com/contest/318/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long half = n / 2;

    if(half * 2 < n)
    {
        half++;
    }

    if(k <= half)
    {
        cout << (2 * k) - 1;
    }
    else
    {
        cout << (2 * (k - half));
    }
}