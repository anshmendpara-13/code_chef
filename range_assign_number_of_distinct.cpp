#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool cnt = false;
        if (arr[0] == arr[n - 1] || arr[0] == arr[n - 2] || arr[n - 1] == arr[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                if (arr[i] == arr[0] && arr[i + 1] == arr[n - 1])
                {
                    cnt = true;
                    break;
                }
            }
            if (cnt)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
