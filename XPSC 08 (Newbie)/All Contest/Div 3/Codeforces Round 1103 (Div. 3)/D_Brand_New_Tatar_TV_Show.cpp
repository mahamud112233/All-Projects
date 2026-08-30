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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            mp[xx]++;
        }
        vector<pair<int, int>> mm(mp.begin(), mp.end());
        int m = mm.size();
        bool f = false;
        for (int i = 0; i < m; i++)
        {
            int to = mm[i].second;
            vector<int> v;
            v.push_back(mm[i].second);
            int x = mm[i].first;
            bool flag = false;
            for (int jj = i + 1; jj < m; jj++)
            {
                if (mm[jj].first > x + k)
                    break;
                if (mm[jj].first <= x + k && mm[jj].first == 1)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                f = true;
                break;
            }
            for (int j = i + 1; j < m; j++)
            {
                if (x <= mm[j].first && mm[j].first - x <= k)
                {
                    to += mm[j].second;
                    v.push_back(mm[j].second);
                    x = max(x, mm[j].first);
                    i++;
                }
                else
                    break;
            }
            bool ff = false;
            for (int kk = 0; kk < v.size(); kk++)
            {
                if (to % 2 == 0)
                {
                    ff = true;
                    break;
                }
                to -= v[kk];
            }
            if (ff)
            {
                f = true;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}