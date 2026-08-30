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
        long long n, m;
        cin >> n >> m;
        long long l = max(0LL, n - m), r = m + n;
        long long bit = -1;
        long long ans = l;
        for (int i = 61; i >= 0; i--)
        {
            if ((l >> i) != (r >> i))
            {
                bit = i;
            }
            if (bit != -1)
            {
                ans |= (1LL << i);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}