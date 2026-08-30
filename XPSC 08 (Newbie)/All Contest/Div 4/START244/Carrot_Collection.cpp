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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0, ans1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < l - 1)
            {
                ans += v[i];
            }
            if (i > r - 1 && i < n)
            {
                ans1+=v[i];
            }
        }
        cout << max(ans,ans1) << '\n';
    }
    return 0;
}