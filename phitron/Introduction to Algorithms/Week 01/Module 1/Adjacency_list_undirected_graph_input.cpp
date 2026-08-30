#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,e;
    cin >> n >> e;
    vector<int> list_graph[n];
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        list_graph[a].push_back(b);
        list_graph[b].push_back(a);       // derected graph a ai line  hobe na;
    }
    for(int i=0;i<n;i++)
    {
        cout << i << "->";
        for(auto x:list_graph[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}