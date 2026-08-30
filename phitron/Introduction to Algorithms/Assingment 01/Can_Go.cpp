#include <bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
int n, m;
bool flag = false;
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int ci, int cj)
{
    if (ci >= n || ci < 0 || cj < 0 || cj >= m)
        return false;
    else
        return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if (grid[si][sj] == 'B')
    {
        flag = true;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci = si + path[i].first;
        int cj = sj + path[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'A' || grid[ci][cj] == 'B'))
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    int si, sj;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
        }
    dfs(si, sj);
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}