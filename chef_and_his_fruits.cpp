#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int d, e;
        d = a / 2;
        e = b;
        cout << min(d, e) << endl;
    }

    // cout <<  <<endl;
    return 0;
}