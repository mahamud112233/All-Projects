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
        long long b, c, d;
        cin >> b >> c >> d;
        long long ans = (b ^ d);
        if (((ans | b) - (ans & c)) != d)
            ans = -1;
        cout << ans << '\n';
    }
    return 0;
}