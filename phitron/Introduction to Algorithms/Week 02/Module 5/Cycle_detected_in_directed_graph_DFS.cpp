#include<bits/stdc++.h>
using namespace std;
vector<int> adj_l[100];
bool vis[100];
bool path_vis[100];
bool cycle;
void dfs(int sr)
{
    vis[sr]=true;
    path_vis[sr]=true;
    for(int child:adj_l[sr])
    {
        if(vis[child] && path_vis[child])
        {
            cycle=true;
        }
        else if(!vis[child])
        {
            dfs(child);
        }
    }
    path_vis[sr]=false;
}
int main ()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_l[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));
    memset(path_vis,false,sizeof(path_vis));
    cycle=false;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(cycle) cout << "Cycle" << endl;
    else cout << "NO cycle" << endl;
    return 0;
}