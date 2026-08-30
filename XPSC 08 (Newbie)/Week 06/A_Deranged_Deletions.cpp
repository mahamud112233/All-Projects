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
        vector<int> c = v;
        sort(c.begin(), c.end());
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != c[i])
            {
                ans.push_back(v[i]);
            }
        }
        if (!ans.empty())
        {
            cout << "YES\n";
            cout << ans.size() << '\n';
            for (auto aa : ans)
                cout << aa << ' ';
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}