#include <bits/stdc++.h>
using namespace std;
vector<int> adj_l[102];
bool vis[102];
int parent[102];
bool cycle;
void bfs(int sr)
{
    queue<int> q;
    q.push(sr);
    vis[sr] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj_l[par])
        {
            if (vis[child] && parent[par] != child)
            {
                cycle = true;
            }
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child]=par;
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
        adj_l[a].push_back(b);
        adj_l[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cycle = false;
            bfs(i);
            if (cycle)
                cout << "Cycle" << endl;
            else
                cout << "NO cycle" << endl;
        }
    }
    return 0;
}