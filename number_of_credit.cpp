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
        cout << (a * 4) + (b * 2) + (c * 0) << endl;
    }

    // cout <<  <<endl;
    return 0;
}