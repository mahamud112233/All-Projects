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
        int n, m;
        cin >> n >> m;
        char gar[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> gar[i][j];
            }
        }
        int ans = 0;
        int mn = min(n, m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 1; i + k < n && j + k < m; k++)
                {
                    if (gar[i][j] == gar[i][j + k] && gar[i][j] == gar[i + k][j] && gar[i][j] == gar[i + k][j + k])
                    {
                        ans++;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}