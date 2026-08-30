#include<bits/stdc++.h>
using namespace std;
vector<int> adj_l[1000];
bool bfs(int c,int d)
{
    if(c==d) return true;
    for(int child:adj_l[c])
    {
        if(child==d)
        return true;
    }
    return false;
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
    
    int q;
    cin >> q;
    while(q--)
    {
        int c,d;
        cin >> c >> d;
       if(bfs(c,d)) cout << "YES" << endl;
       else cout << "NO" << endl;
    }
    return 0;
}