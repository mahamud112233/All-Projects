#include <bits/stdc++.h>
using namespace std;
vector<int> adj_l[100005];
bool vis[100005];

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
            if(!vis[child] )
            {
                vis[child]=true;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    int edge=e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_l[a].push_back(b);
        adj_l[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int compo = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
            compo++;
        }
    }
    cout << edge-n+compo << endl;
    return 0;
}