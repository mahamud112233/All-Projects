#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e, q;
    cin >> n >> e >> q;
    long long int grid[n+1][n+1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                grid[i][j] = 0;
            else
                grid[i][j] = LLONG_MAX;
        }
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        grid[a][b] = min(grid[a][b],c);
        grid[b][a] = min(grid[b][a],c);
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (grid[i][k] != LLONG_MAX && grid[k][j] != LLONG_MAX && grid[i][k] + grid[k][j] < grid[i][j])
                    grid[i][j] = grid[i][k] + grid[k][j];
            }
    while (q--)
    {
        int g, h;
        cin >> g >> h;
        if (grid[g][h] == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << grid[g][h] << endl;
    }
    return 0;
}