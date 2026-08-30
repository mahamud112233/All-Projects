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
        int n, mi, mx;
        cin >> n >> mi >> mx;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < mi && !f)
            {
                ans++;
                f = true;
            }
            else if (v[i] > mx)
            {
                f = false;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}