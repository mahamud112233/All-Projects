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
        int n;
        cin >> n;
        vector<int> v(2*n);
        map<int, pair<int, int>> mp;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> v[i];
            if (mp.count(v[i]))
            {
                mp[v[i]].second = i;
            }
            else
            {
                mp[v[i]].first = i;
            }
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int l = mp[i].first;
            int r = mp[i].second;
            map<int, int> pal;
            while (l <= r)
            {
                if (v[r] != v[l])
                {
                    break;
                }
                else
                {
                    pal[v[r]]++;
                }
                l++;
                r--;
            }
            int mex = 0;
            for (auto [aa,bb] : pal)
            {
                if (aa != mex)
                    break;
                mex++;
            }
            s.insert(mex);
        }
        cout << *s.rbegin() << endl;
    }
    return 0;
}