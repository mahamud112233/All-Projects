#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i - 1] + x;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        int l = 0, r = n - 1, ans = -1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] < val)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}