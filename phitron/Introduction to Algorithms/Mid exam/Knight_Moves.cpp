#include <bits/stdc++.h>
using namespace std;
int n, m;
bool vis[104][104];
int mv[104][104];
vector<pair<int, int>> path = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}};
bool valid(int ci, int cj)
{
    return ci < n && ci >= 0 && cj < m && cj >= 0;
}
void goo(int ki, int kj)
{

    queue<pair<int, int>> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int ci = path[i].first + par.first;
            int cj = path[i].second + par.second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                mv[ci][cj]= mv[par.first][par.second]+ 1;
                q.push({ci,cj});
                vis[ci][cj]=true;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;
        memset(vis, false, sizeof(vis));
        memset(mv,0, sizeof(mv));
        if (ki == qi && kj == qj)
        {
            cout << 0 << endl;
            continue;
        }
        goo(ki, kj);
        if(mv[qi][qj]>0) cout << mv[qi][qj] << endl;
        else cout << -1 << endl;
    }
    return 0;
}