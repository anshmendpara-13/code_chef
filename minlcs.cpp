#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int tt;
    cin >> tt;
    for (int i = 0; i < tt; i++)
    {
        long long int n;
        long long int s = 0;
        cin >> n;
        string e, r;
        cin >> e >> r;
        map<char, long long int> a, b;
        for (auto k : e)
        {
            a[k]++;
        }
        for (auto k : r)
        {
            b[k]++;
        }
        for (char k = 'a'; k <= 'z'; k++)
        {
            s = max(s, min(a[k], b[k]));
        }
        cout << s << endl;
    }
}