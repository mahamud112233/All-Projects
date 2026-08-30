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
        int ans = 0;
        while (n % 3 != 0)
        {
            if ((n + 1) % 3 == 0)
            {
                n++;
                ans++;
            }
            else
            {
                n+=(5-(n%5));
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}