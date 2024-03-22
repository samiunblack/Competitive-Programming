//https://codeforces.com/contest/807/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    vector<int> vc;

    bool rated = false;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(b);
        vc.push_back(b);

        if(b != a)
        {
            rated = true;
        }
    }

    if(rated) cout << "rated";
    else
    {
        sort(vc.begin(), vc.end(), greater<int>());

        if(v == vc)
        {
            cout << "maybe";
        }
        else
        {
            cout << "unrated";
        }
    }
}