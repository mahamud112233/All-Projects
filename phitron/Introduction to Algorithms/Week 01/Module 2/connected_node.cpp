#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,e;
    cin >> n >> e;
    vector<int> adj_l[n];
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_l[a].push_back(b);
        adj_l[b].push_back(a);
    }
    int node;
    cin >> node;
    cout << adj_l[node].size() << endl;
    return 0;
}