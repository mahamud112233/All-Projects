#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        string s;
        cin >> s;
        int z = 0;
        for (auto a : s)
            if (a == '0')
                z++;
        if(z<k) 
        {
            cout << -1 << '\n';
            continue;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                ans.push_back(v[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int re=0;
        for(int i=0;i<k;i++)
            re+=ans[i];
        cout << re << '\n';
    }
    return 0;
}