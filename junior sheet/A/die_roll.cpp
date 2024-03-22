//https://codeforces.com/contest/9/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    int mx = max(y, w);

    int common_divisor = __gcd((6 - (mx - 1)), 6);

    int numerator = (6 - (mx - 1)) / common_divisor;
    int denominator = 6 / common_divisor;

    cout << numerator << "/" << denominator;
}