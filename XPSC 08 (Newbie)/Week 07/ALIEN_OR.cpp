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
        vector<bool> trac(100, false);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int idx = -1;
            for (int i = 0; i < k; i++)
            {
                if (idx == (-1) && s[i] == '1')
                {
                    idx = i;
                }
                else if (idx > -1 && s[i] == '1')
                {
                    idx = -1;
                    break;
                }
            }
            if (idx > -1)
            {
                trac[idx] = true;
            }
        }
        bool ff = true;
        for (int i = 0; i < k; i++)
        {
            if (!trac[i])
            {
                ff = false;
                break;
            }
        }
        cout << (ff ? "YES\n" : "NO\n");
    }
    return 0;
}