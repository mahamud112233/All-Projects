#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for(int i=0;i<=m;i++) cin >> v[i];
    int co=0;
    for(int i=0;i<m;i++)
    {
        int dif=0;
        for(int j=0;j<n;j++)
        {
            if(((v[i]>>j)&1)!= ((v[m]>>j)&1))
            {
                dif++;
            }
        }
        if(dif<=k)
        co++;
    }
    cout << co << '\n';
    return 0;
}