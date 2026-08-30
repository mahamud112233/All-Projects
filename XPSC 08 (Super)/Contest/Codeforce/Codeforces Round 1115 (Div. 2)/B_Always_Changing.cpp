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
        string s;
        cin >> s;
        int o = 0, z = 0;
        int o1 = 0, z1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                o++;
            else
                z++;
            if (i == 0 || s[i] != s[i - 1])
            {
                if (s[i] == '1')
                    o1++;
                else
                    z1++;
            }
        }
        int ans = -1;
        for (int i = max(0, z1 - 2); i <= z1; i++)
        {
            for (int j = max(0, o1 - 2); j <= o1; j++)
            {
                if (abs(i - j) > 1)
                    continue;
                int d_o = o - j;
                int d_z = z - i;
                if (abs(d_o - d_z) <= 1)
                {
                    ans = max(ans, i + j);
                }
            }
        }
        if (ans == -1)
            cout << -1 << '\n';
        else
            cout << n - ans << '\n';
    }
    return 0;
}