#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k<=300)
        {
            cout << "3000" << endl; 
        }
        else
        {
            int m = k - 300;
            cout << (m*10 + 3000) << endl; 
        }
        
    }
    
   
    return 0;
}