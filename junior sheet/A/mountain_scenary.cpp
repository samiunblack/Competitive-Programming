//https://codeforces.com/contest/218/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n * 2 + 1];

    for(int i = 0; i < n * 2 + 1; i++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i < n * 2 + 1; i+=2)
    {
        if(k != 0)
        {
            
            if(arr[i - 1] + 1 != arr[i] && arr[i + 1] + 1 != arr[i])
            {
                k--;
                arr[i] -= 1;
            }
        }
    }

    for(int i = 0; i < n * 2 + 1; i++)
    {
        cout << arr[i] << " ";
    }
}