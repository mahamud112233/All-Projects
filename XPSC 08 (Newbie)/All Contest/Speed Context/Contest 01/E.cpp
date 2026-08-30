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
        long long int n, m;
        cin >> n >> m;
        if (n == m)
        {
            cout << "YES\n";
            continue;
        }
        bool f = false;
        for (long long int i = 0; i < n; i++)
        {
            long long rem = n - i;
            if (i + (rem * 3) == m)
            {
                f = true;
                break;
            }
            else if (i + (rem * 3) < m)
            {
                f = false;
                break;
            }
        }
        f == true ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}