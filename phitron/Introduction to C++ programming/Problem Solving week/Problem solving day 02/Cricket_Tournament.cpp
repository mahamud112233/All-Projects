#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b,c;
        cin >> b >> c;
        if(b-1>=c)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}