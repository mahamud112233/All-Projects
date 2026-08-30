#include<bits/stdc++.h>
using namespace std;
vector<int> adj_l[1000];
int main ()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_l[a].push_back(b);
        adj_l[b].push_back(a);
    }
    int q;
    cin  >> q;
    while(q--)
    {
        int x;
        cin >> x;
        if(!adj_l[x].empty())
        {
            sort(adj_l[x].begin(),adj_l[x].end(),greater<int>());
            for(int con:adj_l[x])
            {
                cout << con << " ";
            }
        }
        else cout << -1 ;
        cout << endl;
    }
    return 0;
}