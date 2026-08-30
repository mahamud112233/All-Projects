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
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());

        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            long long n_mn = l - v[i], n_mx = r - v[i];
            auto mn_id = lower_bound(v.begin() + i + 1, v.end(), n_mn);
            auto mx_id = upper_bound(v.begin() + i + 1, v.end(), n_mx);
            ans += (mx_id - mn_id);
        }
        cout << ans << '\n';
    }
    return 0;
}