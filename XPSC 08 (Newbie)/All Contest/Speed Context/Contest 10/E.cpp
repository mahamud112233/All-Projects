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
        int l, r;
        cin >> l >> r;
        long long ans = 0;
        while (l <= r)
        {
            string a = to_string(l), b = a;
            reverse(a.begin(), a.end());
            if (a == b)
                ans += l;
            l++;
        }
        cout << ans << '\n';
    }
    return 0;
}