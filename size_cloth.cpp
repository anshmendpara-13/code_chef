#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1;
        int a1 = s1.length();
        cin >> s2;
        int a2 = s2.length();

        if (s1[a1 - 1] == 'L' && s2[a2 - 1] == 'M')
        {
            cout << ">" << endl;
        }
        else if (s1[a1 - 1] == 'M' && s2[a2 - 1] == 'L')
        {
            cout << "<" << endl;
        }
        else if (s1[a1 - 1] == 'M' && s2[a2 - 1] == 'M')
        {
            cout << "=" << endl;
        }
        else if (s1[a1 - 1] == 'S' && s2[a2 - 1] == 'M')
        {
            cout << "<" << endl;
        }
        else if (s1[a1 - 1] == 'M' && s2[a2 - 1] == 'S')
        {
            cout << ">" << endl;
        }
        else if (s1[a1 - 1] == 'L' && s2[a2 - 1] == 'S')
        {
            cout << ">" << endl;
        }
        else if (s1[a1 - 1] == 'S' && s2[a2 - 1] == 'L')
        {
            cout << "<" << endl;
        }
        else if (s1[a1 - 1] == 'L' && s2[a2 - 1] == 'L')
        {
            if (a1 > a2)
            {
                cout << ">" << endl;
            }
            else if (a1 == a2)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
        if (s1[a1 - 1] == 'S' && s2[a2 - 1] == 'S')
        {
            if (a1 > a2)
            {
                cout << "<" << endl;
            }
            else if (a1 == a2)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
    }

    return 0;
}