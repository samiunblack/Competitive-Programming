//https://codeforces.com/contest/431/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];

    for(int i = 0; i < 4; i++) cin >> arr[i];

    string s;
    cin >> s;

    int calory = 0;

    for(int i = 0; i < s.size(); i++)
    {
        calory += arr[s[i] - '1'];
    }

    cout << calory;
}