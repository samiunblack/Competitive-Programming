//https://codeforces.com/contest/1/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long width = n / a;
    long long breadth = m / a;

    if(width * a != n) width++;
    if(breadth * a != m) breadth++;

    cout << width * breadth;
}