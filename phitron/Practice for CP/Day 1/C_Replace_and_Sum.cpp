#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long int> a(n + 1), b(n + 1), c(n + 1), d(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++)
            c[i] = max(a[i], b[i]);
        d = c;
        for (int i = n; i > 1; i--)
        {
            if (d[i] > d[i - 1])
            {
                d[i - 1] = d[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if ((i - 1) > 0)
                d[i] = d[i] + d[i - 1];
        }
        d[0] = 0;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            long long int sum = d[r] - d[l - 1];

            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}