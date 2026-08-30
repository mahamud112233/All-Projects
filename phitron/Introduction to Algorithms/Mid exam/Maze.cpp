#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> pat[1005][1005];
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int ci, int cj)
{
    return ci < n && cj < m && ci >= 0 && cj >= 0;
}
int r, c;
void goo(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    pat[si][sj] = {-1, -1};
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        if (grid[par.first][par.second] == 'D')
        {
            r = par.first;
            c = par.second;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + path[i].first;
            int cj = par.second + path[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                pat[ci][cj] = {par.first, par.second};
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));
    memset(pat, -1, sizeof(pat));
    r = -2;
    c = -2;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == 'R')
            {
                goo(i, j);
            }
    if (r > -1 && c > -1)
    {
        pair<int, int> px = pat[r][c];
        int g = px.first;
        int h = px.second;
        while (grid[g][h] != 'R')
        {
            grid[g][h] = 'X';
            pair<int,int> tm=pat[g][h];
            g = tm.first;
            h = tm.second;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}