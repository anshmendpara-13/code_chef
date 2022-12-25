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
        if (size != 5)
        {
            cout << "NO" << endl;
            break;
        }

        char s[size];
        for (int i = 0; i < size; i++)
        {
            char c;
            cin >> c;
            s[i] = c;
        }
    }
}

