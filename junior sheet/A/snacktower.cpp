//https://codeforces.com/problemset/problem/767/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }


    int curr = n;
    priority_queue<int> pq;

    for(int i = 0; i < n; i++)
    {
        if(a[i] != curr)
        {
            cout << endl;
            pq.push(a[i]);
        }
        else
        {
            cout << curr << " ";
            curr--;

            while(!pq.empty() && pq.top() == curr)
            {
                cout << curr << " ";
                pq.pop();
                curr--;
            }
            cout << endl;
        }
    }
}