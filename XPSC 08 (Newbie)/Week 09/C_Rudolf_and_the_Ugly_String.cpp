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
        long long ans = 0;
        for (int i = 0; i < n-2; i++)
        {
            if ((s[i ] == 'm' && s[i + 1] == 'a' && s[i+2] == 'p') || (s[i] == 'p' && s[i + 1] == 'i' && s[i+2] == 'e'))
            {
                ans++;
                i+=2;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}