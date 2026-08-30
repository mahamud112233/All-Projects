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
        vector<int> v(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> v[i];
        vector<int> ans;
        ans.push_back (v[0]);
        for (int i = 0; i < n - 2; i++)
        {
            ans.push_back((v[i + 1] | v[i]));
        }
        ans.push_back(v[n - 2]);
        bool f = true;
        for (int i = 0; i < n - 1; i++)
        {
            if ((ans[i] & ans[i + 1]) != v[i])
            {
                f = false;
                break;
            }
        }
        if (f)
            for (auto x : ans)
                cout << x << " ";
        else
            cout << -1;
        cout << '\n';
    }
    return 0;
}