//https://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int anton = 0;
    int danik = 0;

    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        if(c == 'A') anton++;
        else danik++;
    }

    if(anton > danik) cout << "Anton";
    else if(danik > anton) cout << "Danik";
    else cout << "Friendship";
}