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
        int x, y, z;
        cin >> x >> y >> z;
        int ans1 = y % z;
        int ans2 = ((y / z) + 1) * z;
        int re = ans2 - y;
        if (ans2 <= x)
        {
            cout << min(ans1, re) << '\n';
        }
        else
            cout << ans1 << '\n';
    }
    return 0;
}