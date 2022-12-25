#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int c;
        cin >> c;
        int arr[c];
        int cnt = 0;
        for (int i = 0; i < c; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                cnt++;
            }
        }
        int d = (cnt - 1) / 2;
        // cout << d << endl;

        if (accumulate(arr, arr + n, 0) == 0)
        {
            cout << cnt + ((c - cnt) / 2) << endl;
        }
        else
        {
            if (c % 2 == 0)
            {
                if (cnt % 2 == 0)
                {
                    cout << (cnt - 1) + (c - cnt) / 2 << endl;
                }
                else
                {
                    cout << cnt + (c - cnt) / 2 << endl;
                }
            }
            else
            {
                if ((cnt % 2) == 0)
                {
                    int z = cnt + (c - cnt) / 2;
                    cout << z - d << endl;
                }
                else
                {
                    cout << (cnt - 1) + (c - cnt) / 2 << endl;
                }
            }
        }
    }

    return 0;
}