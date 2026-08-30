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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] <= v[j])
                {
                    ans = max(ans, v[i] + v[j]);
                }
            }
        }
        if (v[0] > ans)
        {
            cout << v[0] << '\n';
        }
        else
            cout << ans << '\n';
    }
    return 0;
}