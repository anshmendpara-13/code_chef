#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        int a[s];

        if (s % 2 == 0)
        {
            int b[s / 2];
            int c[s / 2];
            for (int i = 0; i < s / 2; i++)
            {
                cin >> b[i];
                a[i] = b[i];
            }
            for (int i = (s / 2); i < s; i++)
            {
                cin >> c[i];
                a[i] = c[i];
            }
        }
        for (int i = 0; i < s; i++)
        {
            cout << a[i] << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}