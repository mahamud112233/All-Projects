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
        int z = 0, one = 0;
        vector<bool> v(n, false);
        for (int i = 0; i < n; i++)
        {
            if (i - 1 >= 0 && s[i] == '1' && s[i - 1] == '0' && v[i - 1] != true)
            {
                v[i] = true;
                v[i - 1] = true;
            }
            else if (i + 1 < n && s[i] == '1' && s[i + 1] == '0')
            {
                v[i] = true;
                v[i + 1] = true;
            }
            else if (s[i] == '1')
            {
                v[i] = true;
            }
        }
        bool f = true;
        for (auto aa : v)
        {
            if (aa == false)
            {
                f = false;
                break;
            }
        }
        f ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}