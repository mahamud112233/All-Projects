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
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long int ans = 0;
        for (int j = 30; j >= 0; j--)
        {
            int op = 0;
            for (int i = 0; i < n; i++)
            {
                if (((v[i] >> j) & 1) == 0)
                    op++;
            }
            if (k >= op)
            {
                k -= op;
                ans = (ans | (1LL << j));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}