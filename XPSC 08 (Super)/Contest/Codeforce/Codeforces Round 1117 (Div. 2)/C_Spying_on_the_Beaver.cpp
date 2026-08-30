#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> v(n+1);
        vector<bool> v1(n+1,false);
        for(int i=2;i<=n;i++) 
        {
            int p;
            cin >> p;
            v[p].push_back(i);
        }
        for(int i=0;i<m;i++) 
        {
            int x;
            cin >> x;
            v1[x]=true;
        }
        
        
    }
    return 0;
}