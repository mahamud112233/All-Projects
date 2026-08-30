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
        int x,y,z;
        cin >> x >> y >> z;
        int ans=min(x,z);
        ans+=(y/2);
        cout << ans << '\n';
        
    }
    return 0;
}