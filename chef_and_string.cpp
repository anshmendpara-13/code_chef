#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int s;
        cin >> s;
        long long int a[s];
        for (int i = 0; i < s; i++)
        {
            long long int c;
            cin >> c;
            a[i] = c;
        }
        long long int sum = 0;
        for (int i = 0; i < s - 1; i++)
        {
            sum = sum + abs(a[i] - a[i + 1]) - 1;
        }
        cout << sum  << endl;
    }

    // cout <<  <<endl;
    return 0;
}