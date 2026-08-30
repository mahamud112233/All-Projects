#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        int a,b,n;
        cin >>a >> b >> n;
        if(a*b<=n*n)
        {
            cout << 0  << '\n';
        }
        else if(a*1<=n*n || b*1<=n*n)
        {
            cout << 1 << '\n';
        }
        else
        cout << 2 << '\n';
        
    }
    return 0;
}