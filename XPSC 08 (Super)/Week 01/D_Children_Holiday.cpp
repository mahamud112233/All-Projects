#include <bits/stdc++.h>
using namespace std;
int main()
{
    //abc
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long m;
    int  n;
    cin >> m >> n;
    vector<vector<long long>> v(n, vector<long long>(3));
    vector<long long > an(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    auto check = [&](long long mm)
    {
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            long long t = v[i][0], z = v[i][1], y = v[i][2];
            long long cyc = (t * z) + y;
            long long boll = (mm / cyc) * z;
            boll+=min(z,((mm%cyc)/t));
            an[i]=boll;
            total+=boll;
        }
        return total>=m;
    };
    long long l = 0, r = 1e9, mid, ans=0;
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
    check(ans);
    long long need=m;
    for (int i=0;i<n;i++)
    {
        long long tt=min(need,an[i]);

        cout << tt << " ";
        need-=tt;
    }
    cout << '\n';
    return 0;
}