// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         long long int number = 0;
//         long long int size;
//         cin >> size;
//         char s[size];
//         for (int i = 0; i < size; i++)
//         {
//             cin >> s[i];
//         }

//         number = stoi(s, 0, 2);
//         // cout << number << endl;

//         for (int i = 1; i <= number; i++)
//         {
//             long long int z = number ^ (int)(floor)(number / (pow(2, i)));
//             if (z >= number)
//             {
//                 cout << i << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>

using namespace std;
int main()
{
    int long long n;
    long long int size;
    string str;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> size;
        cin >> str;
        int long long count = 0;
        for (int i = 0; i < size; i++)
        {
            if (str[i] != '0')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}