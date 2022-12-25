#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if ((a * b) % 4 == 0)
        {
            cout << (a * b) / 4 << endl;
        }
        else
        {
            cout << ((a * b) / 4) + 1 << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}