#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n;
    cin >> k >> n;
    vector<long long> v(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    auto check = [&](long long m)
    {
        long long to = 0;
        for (int i = 0; i < n; i++)
        {
            to += min(v[i], m);
            if (to >= m * k)
                return true;
        }
        return false;
    };
    long long l = 1, r = sum / k, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}