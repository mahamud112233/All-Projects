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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        vector<bool> co(m+1,false);
        for(int aa:v)
        {
            co[aa]=true;
        }
        int ans=0;
        for(int i=1;i<=m;i++)
        {
            if(co[i]==false) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}