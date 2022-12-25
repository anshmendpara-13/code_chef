#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, m1 = 0;
        char c;
        cin >> n >> c;
        string str;
        cin >> str;
        vector<long long int> v;
        for (long long int i = 0; i < n; i++)
        {
            if (str[i] == 'g')
            {
                v.push_back(i);
            }
        }
        for (long long int j = 0; j < n; j++)
        {
            if (str[j] == c)
            {
                long long int in = 0, answer = 0;
                auto it = lower_bound(v.begin(), v.end(), j);
                if (it != v.end())
                    in = *it;
                else
                    in = (*v.begin());
                if (in >= j)
                    answer = in - j;
                else
                    answer = n - (j - in);
                m1 = max(m1, answer);
            }
        }
        cout << m1 << endl;
    }
    return 0;
}