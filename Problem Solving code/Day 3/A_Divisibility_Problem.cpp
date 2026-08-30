#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int re=a%b;
        if(re==0)
        {
            cout << re << endl;
            continue;
        }
        int ans=b-re;
        cout << ans << endl;
    }
    return 0;
}