//https://codeforces.com/contest/365/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int arr[k + 1] = {0};

        for(int j = 0; j < s.size(); j++)
        {
            
            if(s[j] - '0' <= k) arr[s[j] - '0'] = 1;
        }

        bool flag = true;

        for(int j = 0; j < k + 1; j++)
        {
            if(arr[j] != 1) 
            {
                flag = false;
                break;
            }
        }

        if(flag) count++;
    }

    cout << count;
}