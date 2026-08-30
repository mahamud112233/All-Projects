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
        vector<int> v(n);
        int to = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            to += v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int te = to - (v[i] + v[j]);
                if (((te / 2) + v[i] + v[j]) > k)
                {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}