#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        int l=0,r=n-1,ans=-1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v[mid]<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout << (ans==-1? 0:ans+1) << '\n';
    }
    return 0;
}