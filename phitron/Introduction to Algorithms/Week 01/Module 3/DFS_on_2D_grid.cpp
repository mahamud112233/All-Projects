#include <bits/stdc++.h>
using namespace std;
char Grid[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> path = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int ci, int cj)
{
    if (ci >= n || ci < 0 || cj < 0 || cj >= m)
        return false;
    else
        return true;
}
void DFS(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + path[i].first;
        int cj = sj + path[i].second;
        if (valid(ci, cj) == true && !vis[ci][cj])
        {
            DFS(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> Grid[i][j];

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    DFS(si, sj);
    return 0;
}