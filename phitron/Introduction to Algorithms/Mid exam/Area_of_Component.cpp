#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
bool vis[1004][1004];
vector<int> v;
int con;
vector<pair<int, int>> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool valid(int ci, int cj)
{
    return ci < n && ci >= 0 && cj < m && cj >= 0;
}
void goo(int si, int sj)
{
    vis[si][sj] = true;
    con++;
    for (int i = 0; i < 4; i++)
    {
        int cci = si + path[i].first;
        int ccj = sj + path[i].second;
        if (valid(cci, ccj) && !vis[cci][ccj] && grid[cci][ccj] == '.')
        {
           
            goo(cci, ccj);
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
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!vis[i][j] && grid[i][j] == '.')
            {
                con = 0;
                goo(i, j);
                v.push_back(con);
            }

    if (v.empty())
        {
            cout << -1 << endl;
            return 0;
        }
    sort(v.begin(), v.end());
    cout << v.front() << endl;
    return 0;
}