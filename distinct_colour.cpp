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
        int c;
        cin >> c;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < c / 2; i++)
        {
            if (s[i] == s[(c / 2) + i])
            {
                // cout << s[i] << " " << s[(c / 2) + 1] << endl;
                cnt++;
            }
        }
        if (cnt == c / 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}