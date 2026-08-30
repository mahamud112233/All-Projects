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
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long sum = 0;
        vector<int> mod(n);
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            mod[i] = m - v[i];
        }
        sort(mod.begin(), mod.end());
        long long ans = sum;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (1LL * (mod[i] - k) * n);
            k=mod[i];
            sum -= m;
            ans = min(ans, sum);
        }
        cout << ans << '\n';
    }
    return 0;
}