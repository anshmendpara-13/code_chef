#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int mp = 0;
        int e, s;
        cin >> e >> s;
        int d = pow(2, s);
        for (int i = 0; i < e; i++)
        {
            mp = d / 2;
            d = d / 2;
            // cout << mp << endl;
        }
        cout << mp << endl;
    }

    // cout <<  <<endl;
    return 0;
}