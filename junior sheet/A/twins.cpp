//https://codeforces.com/contest/160/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n, greater<int>());

    cout << endl;

    int coin = 0;
    int mine = 0;
    
    int i = 0;

    while(mine <= sum)
    {
        coin++;
        mine += a[i];
        sum -= a[i];
        i++;
    }

    cout << coin;
}