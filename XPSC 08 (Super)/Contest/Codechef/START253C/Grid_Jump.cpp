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
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;
        int ans1 = (((a + 1) / 2 * p) + ((b + 1) / 2 * q));
        for (int i = 1; i <= min(a, b); i++)
        {
            int ans = r * i;
            ans += (((a + 1 - i) / 2 * p) + ((b + 1 - i) / 2 * q));
            ans1 = min(ans, ans1);
        }
        cout << ans1 << '\n';
    }
    return 0;
}