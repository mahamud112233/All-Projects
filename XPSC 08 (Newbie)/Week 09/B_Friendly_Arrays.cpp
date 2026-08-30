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
        vector<int> v(n), a(m);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < m; i++)
            cin >> a[i];
        int _xor = 0, _or = 0;
        for (int i = 0; i < n; i++)
            _xor ^= v[i];
        for (int i = 0; i < m; i++)
            _or |= a[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= (v[i] | _or);
        }
        if (n % 2 == 0)
        {
            cout << ans << " " << _xor << '\n';
        }
        else
            cout << _xor << " " << ans << '\n';
    }
    return 0;
}