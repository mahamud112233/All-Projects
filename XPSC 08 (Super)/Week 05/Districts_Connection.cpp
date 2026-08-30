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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        bool f = false;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i + 1])
            {
                f = true;
                break;
            }
        }
        if (!f)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                for (int j = 2; j <= n; j++)
                {
                    if (v[i] != v[j])
                    {
                        cout << i << ' ' << j << '\n';
                        v[j] = 0;
                    }
                }
                v[i] = 0;
            }
            else if (v[i] == 0)
            {
                for (int j = 2; j <= n; j++)
                {
                    if (v[j] != 0)
                    {
                        cout << i << ' ' << j << '\n';
                    }
                }
                break;
            }
        }
    }
    return 0;
}