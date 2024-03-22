//https://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cur = -1;
    int group = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if(cur != a)
        {
            group++;
            cur = a;
        }
    }

    cout << group;
}