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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
                ans++;
        }
        if (ans == 0)
        {
            bool f = false;
            for (auto x : m)
            {
                if (m[v[0]] != x.second)
                {
                    f=true;
                    break;
                }
            }
            if (f == true)
                cout << ans << endl;
            else
                cout << m[v[0]]-1 << endl;
        }
        else
            cout << ans << endl;
    }
    return 0;
}