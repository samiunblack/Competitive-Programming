//https://codeforces.com/contest/427/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int crime = 0;
    int police = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if(a == -1)
        {
            if(police > 0) police -= 1;
            else crime++;
        }
        else police += a;
    }

    cout << crime;
}