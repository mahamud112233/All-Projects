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

        vector<int> ans(32, 0);
        for (int i = 0; i < n; i++)
        {
            int hi = __lg(v[i]);
            ans[hi]++;
        }
        int a = *max_element(ans.begin(), ans.end());
        cout << a << '\n';
    }
    return 0;
}