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
        map<int, int> mp;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            int dif = x - i;
            ans += mp[dif];
            mp[dif]++;
        }
        cout << ans << "\n";
    }
    return 0;
}