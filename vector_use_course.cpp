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
        int size;
        cin >> size;
        vector<int> a(size);

        for (int i = 0; i < size; i++)
        {
            // int c;
            // cin >> c;
            // a[i] = c;

            cin >> a[i];
        }
        sort(a.begin(), a.end());

        cout << size - a[size - 1] << endl;
    }
    return 0;
}