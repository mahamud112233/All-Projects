#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    auto check = [&](long long sec)
    {
        long long to = 0;
        for (int i = 0; i < n; i++)
        {
            to += (sec / v[i]);
            if (to >= k)
                return true;
        }
        return false;
    };
    long long l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}