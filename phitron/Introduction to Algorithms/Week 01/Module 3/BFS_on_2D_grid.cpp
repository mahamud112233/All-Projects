#include <bits/stdc++.h>
using namespace std;
int n, m;
char BFS[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int ci, int cj)
{
    if (ci >= n || ci < 0 || cj >= m || cj < 0)
        return false;
    else
        return true;
}
void Bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        int par_i = q.front().first;
        int par_j = q.front().second;
        q.pop();

        cout << par_i << " " << par_j << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + path[i].first;
            int cj = par_j + path[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> BFS[i][j];

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    Bfs(si, sj);
    return 0;
}