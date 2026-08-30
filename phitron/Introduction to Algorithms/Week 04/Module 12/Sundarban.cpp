#include <bits/stdc++.h>
using namespace std;
char ar[31][31];
bool vis[31][31];
int level[31][31];
int n;
int id = -1, jd = -1;
vector<pair<int, int> > mv;
bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}
void path(int i, int j)
{
    queue<pair<int, int> > q;
    q.push({i, j});
    vis[i][j] = true;
    level[i][j] = 0;
    while (!q.empty())
    {
        int ci = q.front().first;
        int cj = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int si = ci + mv[k].first;
            int sj = cj + mv[k].second;
            if (valid(si, sj) && !vis[si][sj] && (ar[si][sj] == 'P' || ar[si][sj] == 'S'))
            {
                vis[si][sj] = true;
                level[si][sj] = level[ci][cj] + 1;
                if (ar[si][sj] == 'S')
                {
                    id = si;
                    jd = sj;
                    return;
                }
                q.push({si, sj});
            }
        }
    }
}
int main()
{
    mv.push_back({1, 0});
    mv.push_back({-1, 0});
    mv.push_back({0, -1});
    mv.push_back({0, 1});
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> ar[i][j];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                vis[i][j] = false;
                level[i][j] = -1;
            }
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i][j] == 'E')
                {
                    path(i, j);
                    f = true;
                    break;
                }
            }
            if (f)
                break;
        }
        cout << level[id][jd] << endl;
    }

    return 0;
}