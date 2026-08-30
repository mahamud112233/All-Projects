#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n ;
    map<long long int,pair<int,int>> m;
    for(int i=1;i<=n;i++)
    {
        long long int v;
        cin >> v;
        if(m.find(v)==m.end())
        {
            m[v].first=i;
            m[v].second=i;
        }
        else
        {
            m[v].second=i;
        }
    }
    for(auto c:m)
    {
        cout << c.first << " " << c.second.first << " " << c.second.second << "\n";
    }
    return 0;
}