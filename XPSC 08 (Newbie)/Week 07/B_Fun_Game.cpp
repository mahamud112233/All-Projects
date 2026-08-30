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
        string s, t;
        cin >> s >> t;
        bool f = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                break;
            }
            if (s[i] == '0' && t[i] == '1')
            {
                f = false;
                break;
            }
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}