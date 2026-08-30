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
        int n, y;
        cin >> n >> y;
        long long ans = 0;
        while (n > y)
        {
            if (n % 10 > 0)
                ans += ((n / 10) + 1);
            else
                ans += (n / 10);
            n--;
        }
        cout << ans << '\n';
    }
    return 0;
}