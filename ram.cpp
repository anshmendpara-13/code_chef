#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        {
            int num;
            int answer = 0;
            int cnt = 0;
            cin >> num;
            int a[num];
            for (int i = 0; i < num; i++)
            {
                int c;
                cin >> c;
                a[i] = c;
            }
            map<int, int> m;
            for (int i : a)
            {
                m[i]++;
            }
            for (int i = 1; i < 11; i++)
            {
                if (m[i] > 0)
                {
                    cnt++;
                }
                answer = max(answer, m[i]);
            }
            if (cnt == 1)
            {
                cout << 0 << endl;
            }
            else if (cnt == num)
            {
                cout << num - 1 << endl;
            }
            else
            {
                cout << num - answer << endl;
            }
        }
    }
}