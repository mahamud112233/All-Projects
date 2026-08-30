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
        string s;
        cin >> s;
        vector<char> v(7, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'A']++;
        }
        long long ans = 0;
        for (auto a : v)
        {
            if (a < m)
                ans += (m - a);
        }
        cout << ans << '\n';
    }
    return 0;
}