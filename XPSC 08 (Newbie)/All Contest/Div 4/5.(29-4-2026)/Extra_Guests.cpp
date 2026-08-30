#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int ans = n * 100;
    if (n < m)
    {
        int more = (m - n) * 150;
        ans = ans + more;
    }
    cout << ans << endl;
    return 0;
}