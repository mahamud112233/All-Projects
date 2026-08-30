#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a;
    cin >> a;
    if(a==0)
    {
        cout << 0 << endl;
        return 0;
    }
    double re = 100/(a*.2);
    long long int b= re;
    if(re>(double)b)
    {
        cout << b+1 << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}