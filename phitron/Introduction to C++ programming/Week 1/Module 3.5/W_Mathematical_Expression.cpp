#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    char n,m;
    cin >> a >>n >>b >> m >> c;
    if(n=='+')
    {
        if(a+b==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a+b << endl;
        }
    }
    else if(n=='-')
    {
        if(a-b==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a-b << endl;
        }
    }
    else if(n=='*')
    {
        if(a*b==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a*b << endl;
        }
    }
    return 0;
}