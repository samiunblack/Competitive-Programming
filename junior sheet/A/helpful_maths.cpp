//https://codeforces.com/contest/339/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> v;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '+')
        {
            v.push_back((s[i] - '1') + 1);
        }
    }
    

    sort(v.begin(), v.end());

    cout << v[0];

    for(int i = 1; i < v.size(); i++)
    {
        cout << "+";
        cout << v[i];
    }
}