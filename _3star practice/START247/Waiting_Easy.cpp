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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        long long ans=0;
        int mx=v[0];
        for(int i=1;i<n;i++)
        {
            if(mx>v[i])
                ans+=(mx-v[i]);
            mx=max(mx,v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}