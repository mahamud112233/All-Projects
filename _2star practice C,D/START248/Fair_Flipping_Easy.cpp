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
        string s;
        cin >> s;
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                o++;
            else
                z++;
        }
        if (z < k || o < k)
        {
            cout << s << '\n';
        }
        else if (n == (2 * k))
        {
            string ne = s;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                    s[i] = '0';
                else
                    s[i] = '1';
            }
            cout << min(s, ne) << '\n';
        }
        else
        {
            string f, l;
            for (int i = 0; i < z; i++)
                f.push_back('0');
            for (int i = 0; i < o; i++)
                f.push_back('1');
            cout << f << l << '\n';
        }
    }
    return 0;
}