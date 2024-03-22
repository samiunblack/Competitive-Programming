//https://codeforces.com/contest/469/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    
    cin >> n;

    int freq[n] = {0};

    int p;
    cin >> p;

    int a[p];

    for(int i = 0; i < p; i++)
    {
        cin >> a[i];
        freq[a[i] - 1] = 1;
    }

    int q;
    cin >> q;

    int b[q];
    for(int i = 0; i < q; i++)
    {
        cin >> b[i];
        freq[b[i] - 1] = 1;
    }

    bool flag = true;

    for(int i = 0; i < n; i++)
    {
        if(freq[i] != 1)
        {
            flag = false;
            break;
        }
    }

    if(flag) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}