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
        vector<int> v(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool f = true;
        long long  sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < b[i])
            {
                sum1 += abs(v[i] - b[i]);
            }
            else if (v[i] > b[i])
            {
                sum2 += abs(v[i] - b[i]);
            }
            if (sum2 > sum1)
            {
                f = false;
                break;
            }
        }

        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}