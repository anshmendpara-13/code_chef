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
        float s;
        float gross;
        cin >> s;
        if (s < 1500)
        {
            gross = s + (0.90 * s) + (.10 * s);
        }

        else if (s >= 1500)
        {
            gross = (s + (0.98 * s) + 500);
        }
        cout << fixed << setprecision(2) << (gross) << endl;
    }

    return 0;
}