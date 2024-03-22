//https://codeforces.com/contest/742/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[4] = {6, 8, 4, 2};

    if(n == 0) cout << 1;
    else cout << arr[n - (n / 4 * 4)];
}