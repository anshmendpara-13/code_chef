#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int l;
        cin >> l;
        if (l % 2 == 0)
        {
            long long int k = ((l / 2) * (l / 2)) * (2);
            cout << k << endl;
        }
        else
        {
            long long int p = ((l / 2) * ((l / 2) + 1)) * (2);
            cout << p << endl;
        }
    }

    return 0;
}