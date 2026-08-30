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
        int n, m, q;
        cin >> n >> m >> q;
        map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mp[x] = x;
        }
        for (int i = 0; i < q; i++)
        {
            int c;
            cin >> c;
            auto rt = mp.lower_bound(c);
            int pos = -1, p = -1;
            if (rt != mp.end())
                pos = rt->first;
            if (rt != mp.begin())
            {
                rt--;
                p = rt->first;
            }
            int result;
            if (pos != -1 && p != -1)
            {
                result = (pos - p) / 2;
            }
            else if (pos == -1)
                result = n - p;
            else if (p == -1)
                result = pos - 1;

            cout << result << endl;
        }
    }
    return 0;
}