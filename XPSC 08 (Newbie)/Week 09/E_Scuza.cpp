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
        int n, q;
        cin >> n >> q;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<long long> pre(n), hig(n);
        pre[0] = v[0];
        hig[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
            hig[i] = max(hig[i - 1], v[i]);
        }
        while (q--)
        {
            int x;
            cin >> x;
            long long ans = 0, l = 0, r = n - 1, mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (x >= hig[mid])
                {
                    ans = pre[mid];
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}