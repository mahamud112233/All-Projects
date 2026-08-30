#include<bits/stdc++.h>
using namespace std;
vector<int> ad_l[1000];
bool vis[1000];
void DFS(int sr)
{
    cout << sr << " ";
    vis[sr]=true;
    for(int child:ad_l[sr])
    {
        if(!vis[child]) DFS(child);
    }
}
int main ()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        ad_l[a].push_back(b);
        ad_l[b].push_back(a);
    }
    DFS(0);
    return 0;
}