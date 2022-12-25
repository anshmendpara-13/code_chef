#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c, d;
        cin >> c >> d;
        if (d > c)
        {
            cout << "REPAIR" << endl;
        }
        else if (c > d)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}