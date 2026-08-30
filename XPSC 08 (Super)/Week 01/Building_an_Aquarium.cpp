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
        long long n,x;
        cin >> n >> x;
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        auto check=[&](long long mi)
        {
            long long total=0;
            for(int i=0;i<n;i++)
            {
                total+=max(0LL,(mi-v[i]));
                if(total>x)
                return true;
            }
            return false;
        };
        long long l=1,r=2*10e9,mid,ans=1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(check(mid))
            {
                
                r=mid-1;
            }
            else
            {
                ans=mid;
                l=mid+1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}