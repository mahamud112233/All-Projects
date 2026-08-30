#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<long long int> pre(n),suf(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++) pre[i]=pre[i-1]+v[i];
    suf[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--) suf[i]=suf[i+1]+v[i];
    long long int ans = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if ( pre[l] == suf[r])
        {
            ans=max(ans,pre[l]);
            l++;
            r--;
        }
        else if (pre[l] < suf[r])
        {
            l++;
        }
        else if (pre[l] > suf[r])
        {
            r--;
        }
    }
    cout << ans << endl;
    return 0;
}