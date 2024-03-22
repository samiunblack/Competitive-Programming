//https://codeforces.com/contest/143/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, r2;
    int c1, c2;
    int d1, d2;

    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    bool found = false;
    int b1, b2, b3, b4;

    for(int i = 1; i <= 9; i++)
    {
        b1 = i;
        b2 = r1 - b1;
        b3 = c1 - b1;
        b4 = r2 - b3;
        
        if(b3 + b2 == d2 && b1 + b4 == d1 && b2 + b4 == c2)
        {
            set<int> boxes;
            boxes.insert(b1);
            boxes.insert(b2);
            boxes.insert(b3);
            boxes.insert(b4);

            if(boxes.size() == 4) 
            {
                if(0 < b1 && b1 < 10 && 0 < b2 && b2 < 10 && 0 < b3 && b3 < 10 && 0 < b4 && b4 < 10)
                {
                    found = true;
                    break;
                }
            }
        }
    }

    if(found)
    {
        cout << b1 << " " << b2 << endl << b3 << " " << b4;
    }
    else cout << -1;
}