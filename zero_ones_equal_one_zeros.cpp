#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int n1;
        cin >> n1;
        if (n1 % 2 != 0)
        {
            for (int i = 1; i <= n1; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
        }
        else if (n1 % 2 == 0)
        {
            for (int i = 1; i <= n1; i++)
            {
                if (i <= n1 / 2)
                {
                    if (i % 2 == 0)
                    {
                        cout << "0";
                    }
                    else
                    {
                        cout << "1";
                    }
                }
                if (i > n1 / 2 && i <= n1)
                {
                    if (i % 2 == 0)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
            }
        }
        cout << "\n";
    }

    return 0;
}