//https://codeforces.com/contest/732/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int i = 1;
    bool found = false;

    for(i = 1;i < 10; i++)
    {
        int curr = k * i;
        if(curr % 10 == r || curr % 10 == 0) 
        {
            found = true;
            break;
        }
    }

    if(found) cout << i;
    else cout << 10;
}