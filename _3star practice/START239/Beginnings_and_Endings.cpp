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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        vector<pair<int, int>> ans(100, {0, 0});
        for (int i = 1; i <= n; i++)
        {
            if (ans[v[i]].first > 0)
            {
                ans[v[i]].second = i;
            }
            else
            {
                ans[v[i]].first = i;
            }
        }
        bool f = true;
        int an = INT_MAX;
        for (auto [a, b] : ans)
        {
            if (a != 0 && b != 0)
            {
                int te = (a - 1) + (n - b);
                an = min(te, an);
                f = false;
            }
        }
        if (f)
            cout << -1 << '\n';
        else
            cout << an << '\n';
    }
    return 0;
}