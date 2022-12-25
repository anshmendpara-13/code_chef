#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int c = s.length();
    int a[c] = {0};
    for (int i = 0; i < s.length() - 1; i++)
    {

        if ((s[i] == '1' && s[i + 1] == '1'))
        {
            count++;
            a[i] = count + 1;
        }
        else
        {
            count = 0;
        }
    }
    int z = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (a[i] > z)
        {
            z = a[i];
        }
    }
    cout << z << endl;

    return 0;
}