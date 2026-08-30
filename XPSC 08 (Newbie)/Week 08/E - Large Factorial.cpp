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
        int n;
        cin >> n;
        long long ans = 1;
        for (int i = 2; i <= n; i++)
        {
            ans = (ans * i);
            if (ans > 1000000007)
                ans %= 1000000007;
        }
        cout << ans << '\n';
    }
    return 0;
}