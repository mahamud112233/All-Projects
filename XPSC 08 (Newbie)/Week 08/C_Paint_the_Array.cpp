#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {   //print color
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long  g1 = v[0];
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, v[i]);
        }
        long long g2 = v[1];
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, v[i]);
        }
        bool f = true;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % g1 == 0)
            {
                f = false;
                break;
            }
        }
        if (f)
        {
            cout << g1 << '\n';
            continue;
        }
        f = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % g2 == 0)
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << g2 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}