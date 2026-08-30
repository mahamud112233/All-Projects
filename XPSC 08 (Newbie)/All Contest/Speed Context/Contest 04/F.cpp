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
        int n;
        cin >> n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++) cin >> v[i];
        bool ans=false;
        int l,r;
        for(int i=1;i<n;i++)
        {
            if(v[i]>v[i+1])
            {
                ans=true;
                l=i;
                r=i+1;
                break;
            }
        }
        if(ans) cout << l << " " << r << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}