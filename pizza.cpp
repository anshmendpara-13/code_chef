#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
                                                                                                                                                                
int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        long long int c;
        cin >> c;
        long long int z1, z2, z3, z4, z5, z6, z7, y1, y2, y3, y4, y5, y6, y7, a, b, d;
        z1 = c / 6;
        z2 = c / 8;
        z3 = c / 10;
        z4 = c / 14;
        z5 = c / 18;
        z6 = c / 16;
        z7 = c / 24;

        y1 = ((c / 6) + 1) * 15;
        y2 = ((c / 8) + 1) * 20;
        y3 = ((c / 10) + 1) * 25;
        y4 = ((c / 14) + 1) * 35;
        y5 = ((c / 18) + 1) * 45;
        y6 = ((c / 16) + 1) * 40;
        y7 = ((c / 24) + 1) * 60;

        a = min(y1, min(y2, y3));
        b = min(y4, min(y5, y6));
        d = min(a, min(b, y7));

        if ((c % 6 == 0))
        {
            cout << (c / 6) * 15 << endl;
        }
        else if (c % 8 == 0)
        {
            cout << (c / 8) * 20 << endl;
        }
        else if (c % 10 == 0)
        {
            cout << (c / 10) * 25 << endl;
        }
        else if (c % 14 == 0)
        {
            cout << (c / 14) * 35 << endl;
        }
        else if (c % 18 == 0)
        {
            cout << (c / 18) * 45 << endl;
        }
        else if (c % 16 == 0)
        {
            cout << (c / 16) * 40 << endl;
        }
        else if (c % 24 == 0)
        {
            cout << (c / 24) * 60 << endl;
        }
        else if (c < 6)
        {
            cout << "15" << endl;
        }
        else
        {
            cout << d << endl;
        }
    }

    return 0;
}