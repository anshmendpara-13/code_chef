#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sa;
    cin >> sa;
    while (sa--)
    {
        set<int> ker;
        bool a = true;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ker.insert(x);
        }
        
        if (ker.size() & 1)
        {
            if (!(n - ker.size()))
            {
                a = false;
            }
        }
        cout << (a ? "YES" : "NO") << "\n";
    }
}