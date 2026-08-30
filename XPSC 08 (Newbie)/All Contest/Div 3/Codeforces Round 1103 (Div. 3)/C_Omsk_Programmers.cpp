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
        int x, y, z;
        cin >> x >> y >> z;
        int ans=abs(x-y);
        vector<pair<int,int>> xx,yy;
        int div_x=0;
        while(1)
        {
            xx.push_back({x,div_x});
            if(x==0) break;
            x/=z;
            div_x++;
        }
        int div_y=0;
        while(1)
        {
            yy.push_back({y,div_y});
            if(y==0) break;
            y/=z;
            div_y++;
        }
        for(auto [a,aa]:xx)
        {
            for(auto [b,bb]:yy)
            {
                ans=min(ans,aa+bb+abs(a-b));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}