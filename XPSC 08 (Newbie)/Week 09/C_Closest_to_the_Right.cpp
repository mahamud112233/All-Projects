#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    while (k--)
    {
        int val;
        cin >> val;
        bool f = false;
        int ans = 0;
        int l = 1, r = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] < val)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}