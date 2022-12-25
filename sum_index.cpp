#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cnt = 1;
                cout << "[" << i << "," << j << "]" << endl;
                break;
            }
        }
        if (cnt == 1)
        {
            break;
        }
    }
    if (cnt != 1)
    {
        cout << "-1" << endl;
    }

    return 0;
}