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
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] + (v[i + 1] / 2) < ans)
            {
                ans = v[i] + (v[i + 1] / 2);
            }
        }
        sort(v.begin(), v.end());
        if (v[0] + v[1] < ans)
        {
            ans = v[0] + v[1];
        }
        cout << ans << endl;
    }
    return 0;
}