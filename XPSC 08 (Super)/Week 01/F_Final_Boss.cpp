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
        long long h,n;
        cin >> h >> n;
        vector<int> v(n),a(n);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++) cin >> a[i];
        auto check=[&](long long m)
        {
            long long to=0;
            for(int i=0;i<n;i++)
            {
                to+=(((m/a[i])+1)*v[i]);
                if(to>=h) return true;
            }
            return false;
        };
        long long l=0,r=4e10,mid,ans;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(check(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout << ans+1 << '\n';
    }
    return 0;
}