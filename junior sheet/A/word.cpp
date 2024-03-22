//https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int up = 0, low = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(toupper(s[i]) == s[i])
        {
            up++;
        }
        else low++;
    }

    if(up > low) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
}