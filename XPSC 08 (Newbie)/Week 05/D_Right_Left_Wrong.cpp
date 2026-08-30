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
        vector<long long int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        vector<long long int> pre(n); pre[0]=v[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        string s;
        cin >> s;
        long long int ans=0;
        int l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]!='L')
            {
                l++;
            }
            if(s[r]!='R')
            {
                r--;
            }
            if(s[l]=='L' && s[r]=='R')
            {
                ans+=(pre[r]-pre[l]+v[l]);
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}