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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mi;
        cin >> mi;
        while (mi--)
        {
            string s;
            cin >> s;
            if (n != s.size())
            {
                cout << "NO" << endl;
                continue;
            }
            bool f = true;
            map<int, char> mp;
            map<char, int> m;
            for (int i = 0; i < n; i++)
            {
                if (mp.count(v[i]) && mp[v[i]] != s[i])
                {
                    f = false;
                    break;
                }
                else if (!mp.count(v[i]))
                {
                    mp[v[i]] = s[i];
                }
                if (m.count(s[i]) && m[s[i]] != v[i])
                {
                    f = false;
                    break;
                }
                else if (!m.count(s[i]))
                {
                    m[s[i]] = v[i];
                }
            }
            f == true ? cout << "YES\n" : cout << "NO\n";
        }
    }
    return 0;
}