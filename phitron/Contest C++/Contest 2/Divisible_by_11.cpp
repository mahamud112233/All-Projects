#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    cin >> a;
    int os=0,es=0;
    for (int j=1, i=a.size()-1;i>=0;i--,j++)
    {
        
        if( j%2==1)
        {
            os=os+a[i]-'0';
        }
        else 
        {
            es=es+a[i]-'0';
            
        }
    }
    int s=os-es;
    s<0 ? s=s*(-1) : s=s;
    if(s%11==0)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}