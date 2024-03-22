//https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    int i = 0, j = n - 1;

    int s = 0, d = 0;
    char cur = 's';

    while(i <= j)
    {
        if(cur == 's')
        {
            if(arr[i] > arr[j]) {
                s += arr[i];
                i++;
            }
            else 
            {
                s += arr[j];
                j--;
            }
            cur = 'd';
        }
        else
        {
            if(arr[i] > arr[j]) {
                d += arr[i];
                i++;
            }
            else 
            {
                d += arr[j];
                j--;
            }
            cur = 's';
        }
    }

    cout << s << " " << d;
}