#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int t;
        int a, b;
        cin >> t;
        cin >> a >> b;
        int c[t];
        for (int i = 0; i < t; i++)
        {
            cin >> c[i];
        }

        int ct1 = 0, ct2 = 0;
        for (int i = 0; i < t; i++)
        {
            if (c[i] % a == 0)
            {
                ct1++;
            }
        }
        for (int i = 0; i < t; i++)
        {
            if (c[i] % b == 0)
            {
                ct2++;
            }
        }
        if (ct1 > ct2)
        {
            cout << "RAM" << endl;
        }
        else
        {
            cout << "LAKSHMAN" << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}