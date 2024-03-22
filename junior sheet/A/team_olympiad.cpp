//https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v1;
    vector<pair<int, int>> v2;
    vector<pair<int, int>> v3;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if(a == 1)
        {
            v1.push_back({a, i + 1});
        }

        else if(a == 2)
        {
            v2.push_back({a, i + 1});
        }

        else if(a == 3) v3.push_back({a, i + 1});

    }

    int size = min(v1.size(), min(v2.size(), v3.size()));

    cout << size << endl;

    for(int i = 0; i < size; i++)
    {
        cout << v1[i].second << " " << v2[i].second << " " << v3[i].second << endl;
    }
}