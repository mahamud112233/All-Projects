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
        string s, ans;
        cin >> s;
        ans = s;

        for (int i = 0; i < n;)
        {
            int ii = i;
            int id = i;
            while (id < n && s[i] == s[id])
                id++;
            ii = id;
            if (s[i] == '0' && id < n)
            {
                int id2 = id;
                while (id2 < n && s[id] == s[id2])
                {
                    id2++;
                }
                string ss;
                ss = s.substr(i, id2 - i);
                ans = min(ans, ss);
                ii = id2;
            }
            i = ii;
        }
        cout << ans << '\n';
    }
    return 0;
}