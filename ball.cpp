#include <iostream>
#include <string>

using namespace std;

long long int factorial(long long int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n + factorial(n - 1);
}

int main()
{
    long long int n;
    cin >> n;
    // cout << factorial(n) << endl; 

    for (int long i = 0; i < n; i++)
    {
        long long int c;
        long long int d;
        cin >> c >> d;
        int e = factorial(d);

        if (((c == 1) && (d == 1)) || ((c != d) && (c >= e)))
        {
            cout << "YES" << endl;
        }
        else if ((c < d) || ((c == d) && ((c > 1) && (d > 1))))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}