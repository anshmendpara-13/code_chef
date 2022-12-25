#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int size;
    string str;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> size;
        cin >> str;
        long long int count = 0;
        for (int i = 1; i <= str.size(); i++)
        {
            count++;
            if (s[i] == '1')
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}