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
        int size;
        cin >> size;
        int arr[size];
        int b = 0;
        int cnt = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            b = __gcd(b, arr[i]);
        }
        // cout << b << endl;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] / b == 1)
            {
                cnt++;
            }
        }
        cout << size - cnt << endl;
    }

    // cout <<  <<endl;
    return 0;
}