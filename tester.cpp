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
        int d = max(a, max(b, c));
        if (d == a)
        {
            cout << "SETTER" << endl;
        }
        else if (d == b)
        {
            cout << "TESTER" << endl;
        }
        else
        {
            cout << "EDITORIALIST" << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}