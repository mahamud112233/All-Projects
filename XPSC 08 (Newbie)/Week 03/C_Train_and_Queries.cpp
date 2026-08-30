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
        string s;
        getline(cin, s);
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!mp.count(x))
                mp[x].first = i;
            mp[x].second = i;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (mp.count(a) && mp.count(b))
            {
                if (mp[a].first < mp[b].first || mp[a].first < mp[b].second)
                {
                    cout << "YES\n";
                }
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}