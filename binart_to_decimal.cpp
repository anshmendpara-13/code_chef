#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int x = s.length();
    int dec = 0;
    for (int i = x - 1; i >= 0; i--)
    {
        int c = x - i - 1;
        // dec = (s[i] * pow(2, c));
        cout << s[i] << endl; 
        cout << pow(2,c) << endl;
        // cout << s[i] * (pow(2,c)) << endl;  
        // cout << dec << endl; 
    }

    // cout << dec << endl;
    return 0;
}
