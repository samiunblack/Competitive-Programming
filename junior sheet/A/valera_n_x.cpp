//https://codeforces.com/contest/404/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    char dg = a[0][0];
    char sq = a[0][1];

    bool flag = true;

    for(int i = 0; i < n; i++)
    {
        if(a[i][i] != dg)
        {
            flag = false;
            break;
        }
        if(a[i][n - 1 - i] != dg)
        {
            flag = false;
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j && j != n - 1 - i)
            {
                if(a[i][j] != sq || sq == dg)
                {
                    flag = false;
                    break;
                }
            }
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";
}