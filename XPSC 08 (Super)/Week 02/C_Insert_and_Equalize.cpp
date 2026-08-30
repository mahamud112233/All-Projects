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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        int mx = *max_element(v.begin(), v.end());
        int gccd = 0;
        vector<int> vv(n, 0);
        for (int i = 0; i < n; i++)
        {
            int dif = mx - v[i];
            vv[i] = dif;
            gccd = __gcd(gccd, dif);
        }
        long long ans = 0;
        for (auto xx : vv)
        {
            ans += (xx / gccd);
        }
        sort(v.rbegin(), v.rend());
        int add = mx - gccd;
        bool f = false;
        for (int i = 0; i < n;)
        {
            if (add < v[i])
                i++;
            else if (add == v[i])
            {
                i++;
                add -= gccd;
            }
            else
            {
                f = true;
                break;
            }
        }
        if(f)
        {
            ans+=((mx-add)/gccd);
        }
        else
        {
            ans+=(n);
        }
        cout << ans << '\n';
    }
    return 0;
}