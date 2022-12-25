#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, c;
        cin >> a >> c;
        if ((a + c) % 2 == 0)
        {
            cout << (a + c) / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}