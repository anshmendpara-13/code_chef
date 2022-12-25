#include <iostream>

using namespace std;

int main()
{
    int a[4];
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        if (a[i] >= 10)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}