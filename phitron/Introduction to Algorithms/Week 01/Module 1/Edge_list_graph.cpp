#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> edge_lish;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        edge_lish.push_back({a,b});
    }
    for(auto p :edge_lish)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}