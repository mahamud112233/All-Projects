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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int mx = 1;
        int cur = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                cur++;
            else
                cur = 1;
            mx = max(cur, mx);
        }
        cout << mx << " ";
        bool f = true;
        while (q--)
        {
            char a;
            cin >> a;
            if (f && s.back() == a)
            {
                cur++;
                f = false;
            }
            else if (s.back() == a)
            {
                cur++;
            }
            else
            {
                cur = 1;
            }
            s.push_back(a);
            mx = max(mx, cur);
            cout << mx << " ";
        }
        cout << "\n";
    }
    return 0;
}