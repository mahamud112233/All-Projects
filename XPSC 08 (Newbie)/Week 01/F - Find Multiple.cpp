#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a >> b >> c;
    bool f=false;
    for(int i=1;;i++)
    {
        if(c*i>b) 
        {
            f=true;
            break;
        }
        int s=c*i;
        if(s>=a && s<=b)
        {
            cout << s << endl;
            break;
        }
    }
    if(f==true) cout << -1 << endl;
    return 0;
}