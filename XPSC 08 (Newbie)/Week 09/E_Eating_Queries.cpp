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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        vector<long long> pre(n);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        while (q--)
        {
            int x;
            cin >> x;
            int l = 0, r = n - 1, ans = -1, mid;
            while (r >= l)
            {
                mid = (l + r) / 2;
                if (pre[mid] < x)
                {
                    l = mid + 1;
                }
                else
                {
                    ans = mid;
                    r = mid - 1;
                }
            }
            cout << (ans == -1 ? ans : ans + 1) << '\n';
        }
    }
    return 0;
}