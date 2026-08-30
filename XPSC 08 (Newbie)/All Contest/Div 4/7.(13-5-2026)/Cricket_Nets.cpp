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
        if (n <= 20)
        {
            ans = n * 10;
        }
        else
        {
            int t = (n - 20) / 2;
            ans = (20 * 10) + (t * 5);
        }
        cout << ans << endl;
    }
    return 0;
}