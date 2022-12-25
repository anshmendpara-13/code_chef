#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        long long int size;
        cin >> size;
        string s;
        cin >> s;
        map<char, long long int> m;
        long long int cnt = 0;

        if (s.length() % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (long long int i = 0; i < s.length(); i++)
            {
                m[s[i]]++;
            }

            for (auto ele : m)
            {
                if (ele.second % 2)
                {
                    cout << "NO" << endl;
                    cnt = 1;
                    break;
                }
            }
            if (!cnt)
            {
                cout << "YES" << endl;
            }
        }
    }

    // cout <<  <<endl;
    return 0;
}