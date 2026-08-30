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
        int n, m;
        cin >> n >> m;
        vector<int> v(m + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        vector<int> sum(m + 2, 0);
        for (int i = m; i > 0; i--)
        {
            sum[i] = sum[i + 1] + v[i];
        }
        int ans = 0;
        for (int i = 1; i <= m; i++)
        {
            int to = sum[i];
            if (i * 2 <= m)
            {
                to += (v[i * 2]);
            }
            ans = max(ans, to);
        }
        cout << ans << '\n';
    }
    return 0;
}