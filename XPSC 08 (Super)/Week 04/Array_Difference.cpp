#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> v(n+2,0),dif(n+2,0);
    for(int i=1;i<=n;i++) cin >> v[i];
    while(q--)
    {
        int l,r,c;
        cin >> l >> r >> c;
        dif[l]+=c;
        dif[r+1]-=c;
    }
    for(int i=1;i<=n;i++)
    {
        dif[i]=dif[i]+dif[i-1];
        v[i]+=dif[i];
    }

    for(int i=1;i<=n;i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
    return 0;
}