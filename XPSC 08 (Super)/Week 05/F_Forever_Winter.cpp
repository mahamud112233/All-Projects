#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n + 1);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int y;
        for(int i=1;i<=n;i++)
        {
            if(v[i].size()==1)
            {
                int aa=v[i].front();
                y=v[aa].size()-1;
            }
        }
       int x;
       for(int i=1;i<=1000;i++)
       {
            if((i*y)+i+1==n)
            {
                x=i;
            }
       }
        cout << x << ' ' << y << '\n';
        
    }
    return 0;
}