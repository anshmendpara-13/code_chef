#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int c1;
        cin >> c1;
        int d1[c1];
        for (int k = 0; k < c1; k++)
        {
            int e;
            cin >> e;
            d1[k] = e;
        }

        int *pbegin = d1;
        int *pend = d1 + sizeof(d1) / sizeof(int);

        int c2;
        cin >> c2;
        int d2[c2];
        for (int j = 0; j < c2; j++)
        {
            int f;
            cin >> f;
            d2[j] = f;
            pend = remove(pbegin, pend, d2[j]);
        }

        for (int *p = pbegin; p != pend; ++p)
        {
            cout << *p << ' ';
        }
        cout << endl;
    }
    return 0;
}
