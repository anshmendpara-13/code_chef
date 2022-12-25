// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;
//     while (n--)
//     {
//         long long int a, b;
//         cin >> a >> b;

//         vector<long long int> myset;
//         vector<long long int>::iterator it;

//         int c = 2;
//         while (b > 1)
//         {
//             if (b % c == 0)
//             {
//                 myset.push_back(c);
//                 // cout << c << " ";
//                 b /= c;
//             }
//             else
//             {
//                 c++;
//             }
//         }

//         long long int cnt = myset.size();
//         long long int cnt1 = 0;

//         for (it = myset.begin(); it != myset.end(); ++it)
//         {

//             if (a % (*it) == 0)
//             {
//                 cnt1++;
//             }
//         }
//         if (cnt == cnt1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool isDivisible(long long a, long long b)
{
    if (b == 1)
    {
        return true;
    }
    long long gcd = __gcd(a, b);
    if (gcd == 1)
    {
        return false;
    }
    return isDivisible(a, b / gcd);
}

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (isDivisible(a, b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
