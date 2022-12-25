#include <bits/stdc++.h>
using namespace std;
const long long int M = 1e9 + 7;
const long long int N = 1e6 + 10;
long long int arr[N];
int main()
{

    long long int n;
    cin >> n;

    arr[0] = 1;
    arr[1] = 1;

    for (long long int i = 2; i < N; i++)
    {
        arr[i] = (i * arr[i - 1]) % M;
    }

    for (int i = 0; i < n; i++)
    {
        long long int size;
        cin >> size;
        long long int a[size];
        for (long long int j = 0; j < size; j++)
        {
            cin >> a[j];
        }
        long long int ans = 0;
        for (long long int j = 0; j < size; j++)
        {
            ans = ans + arr[a[j]];
            ans = ans % M;
        }
        cout << ans << endl;
    }

    return 0;
}