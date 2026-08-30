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
            cin >> v[i].first >> v[i].second;
        }
        vector<int> tm(n);
        for (int i = 0; i < n; i++)
            cin >> tm[i];

        int ans = 0 + v[0].first + tm[0];
        
        for (int i = 0; i < n - 1; i++)
        {
            int rest = ((v[i].second - v[i].first + 1) / 2);
            int dep = max(v[i].second, rest + ans);
            ans = (v[i + 1].first - v[i].second + tm[i + 1] + dep);
        }
        cout << ans << endl;
    }
    return 0;
}