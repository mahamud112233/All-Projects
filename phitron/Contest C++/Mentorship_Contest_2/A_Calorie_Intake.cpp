#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a >> b >> c;
    int eat=b*c;
    if(eat<=a)
    {
        cout << a-eat << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}