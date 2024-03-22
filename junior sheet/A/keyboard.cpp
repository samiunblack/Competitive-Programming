//https://codeforces.com/contest/474/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char d;
    cin >> d;

    string s;
    cin >> s;

    if(d == 'R')
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = keyboard[keyboard.find(s[i]) - 1];
        }
    }
    else {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = keyboard[keyboard.find(s[i]) + 1];
        }
    }

    cout << s;
}