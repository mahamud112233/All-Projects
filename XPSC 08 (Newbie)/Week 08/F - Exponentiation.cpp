#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        long long a, b;
        cin >> a >> b;
        long long ans = 1;
        for (int i = 0; b > 0; i++, b = b / 2)
        {
            if (b & 1)
            {
                ans = (ans % M * a % M) % M;
            }
            a = (a * a) % M;
        }
        cout << ans << '\n';
    }
    return 0;
}