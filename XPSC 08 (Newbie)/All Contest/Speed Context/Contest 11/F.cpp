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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        vector<int> ans(n);
        ans[v[0].second] = -1;
        if (n > 1)
            ans[v[n - 1].second] = -1;
        for (int i = 1; i < n - 1; i++)
        {
            long long t1 = (v[i - 1].first + v[i].first) / 2 + 1;
            long long t2 = (v[i].first + v[i + 1].first) / 2;
            ans[v[i].second] = t2 - t1 + 1;
        }
        for (auto aa : ans)
            cout << aa << " ";
        cout << '\n';
    }
    return 0;
}