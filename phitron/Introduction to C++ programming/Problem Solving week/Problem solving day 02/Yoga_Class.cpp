#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    while(a--)
    {
        int b,c,d;
        cin >> b >> c >> d;
        int x=(b/2)*d+(b%2)*c;
        int y=b*c;
        
        x<y ? cout << y << endl : cout << x << endl ;
    }
    return 0;
}