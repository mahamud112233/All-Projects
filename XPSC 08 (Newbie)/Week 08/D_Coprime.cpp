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
        vector<pair<bool, int>> v(1002, {false, 0});
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x] = {true, i};
        }
        int ans = 0;
        for (int i = 1000; i > 0; i--)
        {
            if (!v[i].first)
                continue;
            for (int j = i; j > 0; j--)
            {
                if (!v[j].first)
                    continue;
                if (__gcd(i, j) == 1)
                {
                    ans = max(ans, v[i].second + v[j].second);
                }
            }
        }
        if (ans)
            cout << ans << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}