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
        int n, sum;
        cin >> n >> sum;
        if (sum <= n * 5)
        {
            cout << n * 6 << endl;
        }
        else
        {
            int ne = n * 6 - sum;
            int ans = ne * 6 + (n - ne) * 5;
            cout << ans << endl;
        }
    }
    return 0;
}