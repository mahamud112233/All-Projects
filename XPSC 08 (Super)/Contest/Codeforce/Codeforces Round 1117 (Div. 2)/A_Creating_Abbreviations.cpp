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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        set<char> ss;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ss.insert(v[i][0] - 32);
        }
        vector<string> v1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v1[i];
        }
        vector<bool> arr(m, false);
        int co = 0;
        bool f = true;
        while (co < m && f)
        {
            f = false;
            for (int i = 0; i < m; i++)
            {
                if (arr[i])
                    continue;
                bool make = true;
                for (int j = 0; j < v1[i].size(); j++)
                {
                    if (!ss.count(v1[i][j]))
                    {
                        make = false;
                        break;
                    }
                }
                if (make)
                {
                    arr[i] = true;
                    co++;
                    f = true;
                }
            }
        }
        if (co == m)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}