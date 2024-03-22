//https://codeforces.com/contest/443/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    char ch = '!';

    while(ch != '}')
    {
        cin >> ch;
        if(!(ch == '{' || ch == '}' || ch == ',' || ch == ' '))
        {
            
            st.insert(ch);
        }
    }

    cout << st.size();
}