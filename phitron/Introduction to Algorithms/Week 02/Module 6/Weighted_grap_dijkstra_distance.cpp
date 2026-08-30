#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj_list[100];
int dis[100];
void dijkstra(int sr)
{
    queue<pair<int,int>> q;
    q.push({sr,0});
    dis[sr]=0;
    while(!q.empty())
    {
        int p_node=q.front().first;
        int p_dis=q.front().second;
        q.pop();
        for(auto child:adj_list[p_node])
        {
            int child_node=child.first;
            int child_dis=child.second;
            if((p_dis+child_dis)<dis[child_node])
            {
                dis[child_node]=p_dis+child_dis;
                q.push({child_node,dis[child_node]});
            }
        }
    }
}
int main ()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dijkstra(0);
    for(int i=0;i<n;i++)
    {
        cout << i << "->" << dis[i] << endl; ;
    }
    return 0;
}