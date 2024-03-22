//https://codeforces.com/contest/270/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        int side = 360 / (180 - a);

        if(side * a % 180 != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}