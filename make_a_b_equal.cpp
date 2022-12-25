#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        long long int size;
        cin >> size;
        long long int a[size];
        long long int b[size];
        long long int x = 0, y = 0;

        for (long long int i = 0; i < size; i++)
        {
            long long int c;
            cin >> c;
            a[i] = c;
            x = x + c;
        }
        for (long long int i = 0; i < size; i++)
        {
            long long int d;
            cin >> d;
            b[i] = d;
            y = y + d;
        }

        if (x != y)
        {
            cout << "-1" << endl;
        }
        else
        {
            long long int com[size];
            for (long long int i = 0; i < size; i++)
            {
                com[i] = abs(a[i] - b[i]);
            }

            long long int max = com[0];
            for (long long int i = 0; i < size; i++)
            {
                if (com[i] >= max)
                {
                    max = com[i];
                }
            }
            cout << max << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}
