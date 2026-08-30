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
        vector<int> v(n);
        int gcd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<long long, long long> mp, cn;

        for (int i = 0; i < n; i++)
        {
            int xx = v[i];
            int op = 0;
            while (xx > 0)
            {
                mp[xx] += op;
                cn[xx]++;
                op++;
                xx /= 2;
            }
        }
        long long ans = LLONG_MAX;
        for (auto [a, b] : cn)
        {
            if (b == n)
                ans = min(ans, mp[a]);
        }
        cout << ans << '\n';
    }
    return 0;
}