#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    long long mid=(n/2);
    auto check=[&](long long mm)
    {
        long long to=0;
        for(int i=mid;i<n && v[i]<mm;i++)
        {
            to+=(mm-v[i]);
        }
        return to<=k;
    };
    
    long long l=v[mid],r=v[mid]+k,m,ans;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(check(m))
        {
            ans=m;
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    cout << ans << '\n';
    return 0;
}