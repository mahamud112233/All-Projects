#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    while(a--)
    {
        int h,w,m;
        cin >> h >> w >> m;
        (h-m)%w==0 ? cout << ((h-m)/w)+1 << endl : cout << ((h-m)/w)+2 << endl;
    }
    return 0;
}