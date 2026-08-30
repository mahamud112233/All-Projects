#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100001];
bool vis[100001];
int dis[100001];
int path[100001];
void bfs(int sr)
{
    queue<int> q;
    q.push(sr);
    vis[sr] = true;
    dis[sr] = 1;
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
    bfs(1);

    if(dis[n]==-1)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    cout << dis[n] << endl;
    deque<int> de;

    int node = n;
    while (node != -1)
    {
        de.push_back(node);
        node = path[node];
    }
    while (!de.empty())
    {
        cout << de.back() << " ";
        de.pop_back();
    }
    return 0;
}