#include <iostream>
using namespace std;

int maxFreq(int *arr, int n)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    return arr[res];
}

int main()
{
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int s1;
        cin >> s1;
        int arr[s1];
        for (int i = 0; i < s1; i++)
        {
            cin >> arr[i];
        }
        int freq = maxFreq(arr, n1);
        int count = 0;
        for (int i = 0; i < s1; i++)
        {
            if (arr[i] == freq)
            {
                count++;
            }
        }
        cout << s1 - count << endl;
    }

    return 0;
}