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
        int n, k;
        cin >> n >> k;
        vector<int> v(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];
        
        int ans = 0;
        int sum = v[0];
        int lf = 0;
        if (v[0]<=k)
        {
           ans=1;
        }
        for (int i = 1; i < n; i++)
        {
            if (h[i - 1] % h[i] != 0)
            {
                lf = i;
                sum = 0;
            }
            sum += v[i];
            while (sum > k && lf <= i)
            {
                sum -= v[lf];
                lf++;
            }
            if (sum <= k)
            {
                ans = max(ans, i - lf + 1);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}