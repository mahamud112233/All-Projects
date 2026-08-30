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
        int n,x;
        cin >> n >> x;
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++) cin >> v[i];
        int mx=0;
        for(int i=1;i<=n;i++)
        {
            mx=max(mx,v[i]-v[i-1]);
        }
        mx=max(mx,(x-v[n])*2);
        cout << mx << '\n';
    }
    return 0;
}