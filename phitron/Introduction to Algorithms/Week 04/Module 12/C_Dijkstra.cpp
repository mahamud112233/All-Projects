#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll,ll>> ad_j[100005];
ll dis[100005];
ll par[100005];
ll n, m;
void dijkstra(ll sr)
{
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push({0,sr});
    dis[sr]=0;
    while(!pq.empty())
    {
        ll ds=pq.top().first;
        ll nd=pq.top().second;
        pq.pop();
        for(auto child:ad_j[nd])
        {
            ll c_dis=child.first;
            ll c_nd=child.second;
            if((ds+c_dis)<dis[c_nd])
            {
                dis[c_nd]=ds+c_dis;
                pq.push({dis[c_nd],c_nd});
                par[c_nd]=nd;
            }
        }

    }
}
int main()
{
    cin >> n >> m;
    while(m--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        ad_j[a].push_back({c,b});
        ad_j[b].push_back({c,a});
    }
    for(ll i=1;i<=n;i++)
    {
        dis[i]=LLONG_MAX ;
        par[i]=-1;
    }
    dijkstra(1);
    if(dis[n]==LLONG_MAX)
    {
        cout << -1 << endl;
        return 0;
    }
    vector<ll> v;
    for(ll i=n;i>0;)
    {
        v.push_back(i);
        i=par[i];
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout << v[i] << " ";
    }
    return 0;
}