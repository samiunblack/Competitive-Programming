//https://codeforces.com/contest/127/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, k;
    cin >> n >> k;

    double sign = 0;

    double prev_a = 0, prev_b = 0;

    for(int i = 0; i < n; i++)
    {
        double a, b;
        cin >> a >> b;

        if(i != 0) sign += sqrt( pow( abs(a - prev_a) , 2) + pow( (abs(b - prev_b)) , 2) );
        prev_a = a; prev_b = b;
    }

    cout << setprecision(10) << sign * k / 50.0;
}