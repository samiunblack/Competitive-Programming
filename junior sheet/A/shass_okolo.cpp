//https://codeforces.com/contest/294/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while(q--)
    {
        int a, b;
        cin >> a >> b;

        a--;

        if(a + 1 < n) arr[a + 1] += arr[a] - b;
        if(a - 1 >= 0) arr[a - 1] += b - 1;
        arr[a] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}