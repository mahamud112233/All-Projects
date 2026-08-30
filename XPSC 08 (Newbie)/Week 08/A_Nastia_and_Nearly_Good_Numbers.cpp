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
        long long  a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
            continue;
        }
        long long ans = a * b;
        if (b < 3)
            ans *= 3;
        cout << "YES\n";
        cout << a << " " << ans - a << " " << ans << '\n';
    }
    return 0;
}