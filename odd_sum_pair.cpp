#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (((a + b) % 2 != 0) || ((c + b) % 2 != 0) || ((a + c) % 2 != 0))
        {
            /* code */
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