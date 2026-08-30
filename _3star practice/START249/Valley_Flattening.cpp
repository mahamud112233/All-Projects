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
        vector<int> a = v, b = v;
        for (int i = 1; i < n - 2; i++)
        {
            int m = min(a[i - 1], a[i + 1]);
            if (a[i] < m)
            {
                a[i - 1] = a[i];
                a[i + 1] = a[i];
            }
        }
        for (int i = n - 2; i > 0; i--)
        {
            int m = min(b[i - 1], a[i + 1]);
            if (a[i] < m)
            {
                a[i - 1] = a[i];
                a[i + 1] = a[i];
            }
        }
        long long sum1 = 0, sum2 = 0;
        for (auto xx : a)
            sum1 += xx;
        for (auto xx : b)
            sum2 += xx;
        cout << min(sum1, sum2) << '\n';
    }
    return 0;
}