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
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x ^= v[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            b[i] = (v[i] ^ x);
        }
        int xx = 0;
        for (int i = 0; i < n; i++)
        {
            xx ^= b[i];
        }
        if (xx == 0)
            cout << x << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}