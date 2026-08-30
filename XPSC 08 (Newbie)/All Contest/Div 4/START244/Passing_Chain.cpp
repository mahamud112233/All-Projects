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
        int n, x;
        cin >> n >> x;
        int ans = 1;
        for (int i = 1; i <= n;)
        {
            if (i + x <= n)
            {
                i = i + x;
                ans = i;
            }
            else
            {
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}