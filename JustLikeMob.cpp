#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k, x;
        cin >> n >> m >> k >> x;
        ll cnt = 0;
        for (ll i = 1; i < n * k + 1; i++)
        {
            if (i % k == 0)
            {
                cnt = cnt + (n + m);
            }
            else
            {
                cnt = cnt + n;
            }
        }
        // cout << cnt << endl;
        if (cnt - m <= x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}