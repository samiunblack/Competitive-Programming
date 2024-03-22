//https://codeforces.com/contest/707/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool bw = true;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char c;
            cin >> c;

            if(c != 'B' && c != 'W' && c != 'G')
            {
                bw = false;
            }
        }
    }

    if(bw)
    {
        cout << "#Black&White";
    }
    else
    {
        cout << "#Color";
    }
}