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
        int p = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                p++;
            }
        }
        string ans;
        int mn = p;
        int mx = n - p;
        for (int i = 0; i <= n; i++)
        {
            if (i < mn || i > mx)
            {
                ans.push_back('0');
            }
            else if (n % 2 != 0)
            {
                ans.push_back('1');
            }
            else
            {
                if ((i - mn) % 2 == 0)
                    ans.push_back('1');
                else
                    ans.push_back('0');
            }
        }
        cout << ans << '\n';
    }
    return 0;
}