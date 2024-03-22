//https://codeforces.com/contest/770/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int curr = 'a';

    string s;

    for(int i = 0; i < k; i++)
    {
        s += curr;
        curr++;
    }

    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(j >= s.size()) j = 0; 
        cout << s[j];
        j++;
    }
}