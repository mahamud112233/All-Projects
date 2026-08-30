#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
bool vis[1004][1004];
bool flag=false;
vector<pair<int, int>> path = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};
bool valid(int ci, int cj)
{
    return ci < n && ci >= 0 && cj < m && cj >= 0;
}
void goo (int si,int sj,int ci,int cj)
{
    if(si==ci && sj==cj)
    {
        flag=true;
    }
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int cci=si+path[i].first;
        int ccj=sj+path[i].second;
        if(valid(cci,ccj) && !vis[cci][ccj]  && grid[cci][ccj]=='.' )
        {
            goo(cci,ccj,ci,cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    
    memset(vis,false,sizeof(vis));
    int si,sj,ci,cj;
    cin >> si >> sj >> ci >> cj;
    goo(si,sj,ci,cj);
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}