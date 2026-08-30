#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,x,y;
    cin >> n >> x >> y;
    auto check=[&](long long time)
    {
        long long to=1;
        to+=(time/x);
        to+=(time/y);
        return to>=n;
    };
    long long l=1,r=10e9,mid,ans=0;
    while(l<=r && n>1)
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
    cout << ans+min(x,y) << '\n';
    return 0;
}