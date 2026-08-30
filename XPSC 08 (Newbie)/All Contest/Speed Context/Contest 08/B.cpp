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
        for (int i = 0; i < 6; i++)
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        bool f = false;
        for (int i = 2; i < 6; i++)
        {
            if ((s[i - 2] == s[i - 1] && s[i - 1] == s[i]) && (s[i] == 'W'))
            {
                f = true;
                break;
            }
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}