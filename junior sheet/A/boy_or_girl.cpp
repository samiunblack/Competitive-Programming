//https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int arr[26] = {0};
    int cnt = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(arr[s[i] - 97] == 0) {
            cnt++;
            arr[s[i] - 97] = 1;
        }
    }

    if(cnt % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}