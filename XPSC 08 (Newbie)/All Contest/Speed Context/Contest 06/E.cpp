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
        long long int te, n, sumn;
        cin >> te >> n >> sumn;
        long long int ans = 0;
        for (int i = 0; i < te; i++)
        {
            if (sumn > n)
            {
                ans += (n * n);
                sumn -= n;
            }
            else if (sumn > 0)
            {
                ans += (sumn * sumn);
                sumn -= sumn;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}