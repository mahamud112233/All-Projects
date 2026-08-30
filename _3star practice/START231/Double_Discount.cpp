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
        vector<int> test(n);
        for (int i = 0; i < n; i++)
            cin >> test[i];
        vector<pair<int, int>> ans;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int it = v[i], jt = v[j];
                int mx = max(it, jt);
                int dis = min(100, mx / 2);
                int mn = min(it, jt);
                if ((mx + mn - dis) <= k)
                    ans.push_back({test[i] + test[j], mx + mn - dis});
            }
        }
        int answer = INT_MIN;
        if (ans.empty())
        {
            answer = 0;
        }
        else
            for (auto [a, b] : ans)
            {
                if (a > answer)
                    answer = a;
            }

        cout << answer << '\n';
    }
    return 0;
}