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
        int n,a,m;
        cin >> n >> a >> m;
        int ans=n-(m*a);
        if(ans<0) cout << 0 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}