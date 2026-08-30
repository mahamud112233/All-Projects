#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a >> b >> c;
    int ans=0;
    if(c>=a)
    {
        ans=(c/a)*b;
    }
    cout << ans << endl;
    return 0;
}