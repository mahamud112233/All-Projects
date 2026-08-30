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
        int n,m,x;
        cin >> n >> m >> x;
        int ans=x/m;
        if(x%m!=0)
        {
            ans++;
        }
        cout << min(ans-0,n+1-ans) << '\n';
        
        
        
    }
    return 0;
}