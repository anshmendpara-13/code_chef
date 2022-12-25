#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w == x || w == y || w == z || w == (x + y) || w == (y + z) || w == (x + z) || w == (x + y + z))
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