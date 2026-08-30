#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    for(int i=1;i<=a;i++)
    {
        int b;
        cin >> b;
        if(b%4==0)
        {
            cout << b/4 << endl;
        }
        else
        {
            cout << b/4+1 << endl;
        }
    }
    return 0;
}