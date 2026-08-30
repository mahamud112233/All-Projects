#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    int t = 1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        cout << "CASE# " << t++ << ":\n";
        while (q--)
        {
            int x;
            cin >> x;
            int ans = -1, l = 0, r = n - 1, mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (v[mid] == x)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else if (v[mid] < x)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (ans == -1)
            {
                cout << x << " not found\n";
            }
            else
            {
                cout << x << " found at " << ans + 1 << '\n';
            }
        }
    }
    return 0;
}