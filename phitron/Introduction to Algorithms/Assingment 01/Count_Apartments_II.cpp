#include <bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
vector<int> v;
int n, m;
bool valid(int ci, int cj)
{
    if (ci >= n || ci < 0 || cj >= m || cj < 0)
        return false;
    else
        return true;
}
int con = 0;
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    con++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + path[i].first;
        int cj = sj + path[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {

            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                dfs(i, j);
                v.push_back(con);
                con = 0;
            }
        }
    if (v.empty())
    {
        cout << 0 << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}