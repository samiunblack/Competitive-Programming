//https://codeforces.com/contest/225/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int front;
    cin >> front;
    int back = 7 - front;

    bool flag = true;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if(7 - a == front || 7 - a == back || 7 - b == front || 7 - b == back)
        {
            flag = false;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";
}