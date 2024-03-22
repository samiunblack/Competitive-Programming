//https://codeforces.com/contest/667/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double d, h, v, e;
    cin >> d >> h >> v >> e;

    double pi = 2 * acos(0.0);
    double r_sq = ((d / 2.0) * (d / 2.0)) ;
    double rain_increase = pi * r_sq * e;    

    if(v <= rain_increase)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;

        double decrease = v / (pi * r_sq);
        double total = h / (decrease - e);

        cout << setprecision(13) << total;
    }
}
