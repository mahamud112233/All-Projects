#include<bits/stdc++.h>
using namespace std;
vector<int> li[10000];
bool vis[10000];
int dis[10000];
vector<int> level[10000];
void bfs(int sr)
{
    queue<int> q;
    q.push(sr);
    vis[sr]=true;
    dis[sr]=0;
    level[dis[sr]].push_back(sr);
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        for(int child:li[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                dis[child]=dis[par]+1;
                level[dis[child]].push_back(child);
            }
        }
    }
}
int main ()
{
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        li[a].push_back(b);
        li[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    bfs(0);
    int l;
    cin >> l;
    sort(level[l].begin(),level[l].end(),greater<int>());
    for(int x:level[l])
    {
        cout << x << " ";
    }
    return 0;
}