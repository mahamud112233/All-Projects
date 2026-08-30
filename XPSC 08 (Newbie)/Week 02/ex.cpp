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
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[v[i]]++;
        }
        for(auto x:m)
        {
            x.second--;
        }
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(m[v[i]]>1)
            {
                m[v[i]]--;
                if(i>ans) ans=i;
            }
        }
        if(ans==-1) cout << 0 << endl;
        else cout << ans+1 << endl;
    }
    return 0;
}