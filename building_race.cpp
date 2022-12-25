#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float a, b, x, y;
        cin >> a >> b >> x >> y;
        float c, cf;
        c = a * ((1 / x));
        cf = b * ((1 / y));
        if (c == cf)
        {
            cout << "both" << endl;
        }
        else if (c > cf)
        {
            cout << "chefina" << endl;
        }
        else
        {
            cout << "chef" << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}