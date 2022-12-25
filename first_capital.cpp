#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout << s << endl;
    // cout << s[0] << endl;
    // cout << s.length() << endl;

    int cnt = 0;
    if (s[0] >= 'A' && s[0] <= 'Z')
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                cnt++;
            }
        }
    }
    if (cnt == (s.length() - 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}