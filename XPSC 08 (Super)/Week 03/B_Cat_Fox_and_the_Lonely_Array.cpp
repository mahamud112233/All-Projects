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
        vector<int> v(n), g(20+1, -1);
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (int j = 0; j <= 20; j++)
            {
                if ((v[i] >> j) & 1)
                {
                    ans = max(ans, i - g[j]);
                    g[j] = i;
                }
            }
        }
        for (int i = 0; i <= 20; i++)
        {
            if (g[i] != -1)
            {
                ans = max(ans, n - g[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}