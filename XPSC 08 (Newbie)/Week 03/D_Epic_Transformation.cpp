#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int mx=INT_MIN;
        for(auto x:mp)
        {
            if(x.second>mx) mx=x.second;
        }
        int ans=max(mx-(n-mx),n%2);
        if(ans>0) cout << ans << endl;
        else cout << 0 << endl;
    }
    return 0;
}