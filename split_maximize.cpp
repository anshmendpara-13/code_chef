#include <bits/stdc++.h>
#define M 998244353
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int size;
        long long int ans, sum = 0;
        cin >> size;
        long long int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
            ans = sum % M;
        }
        long long int z = (ans * (ans - 1)) % M;
        cout << z << endl;
    }

    return 0;
}