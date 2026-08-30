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
        int n, k;
        cin >> n >> k;
        int fi;
        cin >> fi;
        map<int, int> mp;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != fi)
                mp[x]++;
        }
        deque<int> de;
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            de.push_back(i->second);
        }
        sort(de.begin(), de.end());
        int ans = 1;
        for (auto xx : de)
        {
            if (k >= xx)
                k -= xx;
            else
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}