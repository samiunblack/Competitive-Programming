//https://codeforces.com/contest/520/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int alph[26] = {0};

    for(int i = 0; i < n; i++)
    {
        alph[tolower(s[i]) - 'a']++;
    }

    bool flag = true;

    for(int i = 0; i < 26; i++)
    {
        if(alph[i] == 0)
        {
            flag = false;
            break;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";
}