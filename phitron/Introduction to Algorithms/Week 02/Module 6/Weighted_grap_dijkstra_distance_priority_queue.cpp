#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj_l[100];
int dis[100];
void dijkstra(int sr)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pri;
    pri.push({0,sr});
    dis[sr]=0;
    while(!pri.empty())
    {
        int par_dis=pri.top().first;
        int par_node=pri.top().second;
        pri.pop();
        for(auto child:adj_l[par_node])
        {
            int child_node=child.first;
            int child_dis=child.second;
            if((child_dis+par_dis)<dis[child_node])
            {
                dis[child_node]=child_dis+par_dis;
                pri.push({dis[child_node],child_node});
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
        adj_l[a].push_back({b,c});
        adj_l[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dijkstra(0);
    for(int i=0;i<n;i++)
    {
        cout << i << "->" << dis[i] << endl;
    }
    return 0;
}