#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        int arr[c];
        int mini = -1;
        for (int i = 0; i < c; i++)
        {
            cin >> arr[i];
            if (mini <= arr[i])
            {
                mini = arr[i];
            }
        }
        cout << mini << endl;
    }

    return 0;
}