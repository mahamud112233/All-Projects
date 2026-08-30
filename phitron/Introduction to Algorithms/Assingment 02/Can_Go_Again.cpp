#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    long long int a, b, c;
    Edge(long long int a,long long int b, long long int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int n, e;
long long int dis[1005];
vector<Edge> edge_list;
bool flag;
void bellman_ford()
{
    for (int i = 1; i <= n-1 ; i++)
    {
        for (auto ed : edge_list)
        {
            long long int a = ed.a, b = ed.b, c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }
    
    for (auto ed : edge_list)
    {
        long long int a = ed.a, b = ed.b, c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                flag = true;
                break;
            }

    }
    
}
int main()
{
    cin >> n >> e;
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;

    flag=false;
    bellman_ford();
    int t;
    cin >> t;
    if(flag) 
    {
        cout << "Negative Cycle Detected\n";
        return 0;
    }
    while(t--)
    {
        int p;
        cin >> p;
        if(dis[p]==LLONG_MAX) cout << "Not Possible\n";
        else cout << dis[p] << endl;
    }

    return 0;
}