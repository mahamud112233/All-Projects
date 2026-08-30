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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ans = 0;
        int prev_id = -3;
        int prev_fre = 0;
        for (auto [id, fre] : mp)
        {
            if (id == prev_id + 1)
            {
                if (prev_fre < fre)
                {
                    ans += (fre - prev_fre);
                }
            }
            else
            {
                ans += fre;
            }
            prev_id = id;
            prev_fre = fre;
        }
        cout << ans << endl;
    }
    return 0;
}