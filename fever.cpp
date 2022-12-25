#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;
    cin >> n;
    // cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if (c > 98)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}