#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> mp;
    for (int i = 0; i < (1 << 15); i++)
    {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t)
            mp[i] = 1;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v((1 << 15), 0);
        long long int ans = n;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            for (auto [aa, bb] : mp)
            {
                ans += v[(xx ^ aa)];
            }
            v[xx]++;
        }
        cout << ans << '\n';
    }
    return 0;
}