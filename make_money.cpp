#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c;
        cin >> n >> x >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int d = accumulate(arr, arr + n, 0);
        int k = d;
        sort(arr, arr + n);
        int d2 = d;
        for (int i = 0; i < n; i++)
        {
            k = k + x - arr[i] - c;
            if (k <= d2)
            {
                break;
            }
            d2 = k;
        }
        if (k < d2)
        {
            cout << d2 << endl;
        }
        else
        {

            cout << k << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}