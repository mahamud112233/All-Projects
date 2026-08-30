#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a;
    cin >> a;
    bool flag=false;
    for(long long int i=a;i>0;i=i/10)
    {
        int r=i%10;
        if(r==7)
        {
            flag=true;
            break;
        }
    }
    if(flag==true) cout << "Lucky\n";
    else cout << "Not Lucky\n";
    return 0;
}