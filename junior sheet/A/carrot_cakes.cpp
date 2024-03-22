//https://codeforces.com/contest/799/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int cake = 0;
    int time = 0;
    bool need = false;

    while(cake < n)
    {
        cake += k;
        time += t;

        if(cake >= n) break;

        if(time > d) 
        {
            need = true;
            break;
        }
    }

    if (need) cout << "YES";
    else cout << "NO";
}