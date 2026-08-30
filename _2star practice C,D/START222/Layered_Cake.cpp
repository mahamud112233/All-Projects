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
        int n,m;
        cin >> n >> m;
        map<int,int> mp;
        for(int i=0;i<n;i++) 
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ans=0;
        for(int i=0;i<m;i++) 
        {
            int x;
            cin >> x;
            if(mp.upper_bound(x)!=mp.end())
            {
                for(auto j=mp.upper_bound(x);j!=mp.end();j++)
                {
                    ans+=(j->second);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}