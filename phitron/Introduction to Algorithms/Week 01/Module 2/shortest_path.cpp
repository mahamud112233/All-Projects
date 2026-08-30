#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000];
bool vis[1000];
int dis[1000];
int path[1000];
void bfs(int sr)
{
    queue<int> q;
    q.push(sr);
    vis[sr] = true;
    dis[sr] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                dis[child] = dis[par] + 1;
                path[child] = par;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    memset(path, -1, sizeof(path));
    int l, r;
    cin >> l >> r;
    bfs(l);
    int ne = r;
    deque<int> de;
    while (ne != -1)
    {
        de.push_back(ne);
        ne = path[ne];
    }
    while (!de.empty())
    {
        cout << de.back();
        de.pop_back();
        if (!de.empty())
            cout << "->";
    }
    return 0;
}