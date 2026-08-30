#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    auto check=[&](int m)
    {
        int g=1,lst=v[0];
        for(int i=0;i<n;i++)
        {
            if(v[i]-lst>=m)
            {
                g++;
                lst=v[i];
            }
            if(g>=k) return true;
        }
        return false;
    };
    int l=1,r=(v[n-1]-v[0]),mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout << ans << '\n';
    return 0;
}