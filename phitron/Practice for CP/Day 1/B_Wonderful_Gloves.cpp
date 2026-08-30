#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v(n),g(n),mx(n),mn(n);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++) cin >> g[i];
        for(int i=0;i<n;i++) mx[i]=max(v[i],g[i]);
        for(int i=0;i<n;i++) mn[i]=min(v[i],g[i]);
        long long int sum_v=0;
        for(int x:mx) sum_v+=x;
        sort(mn.begin(),mn.end(),greater<int>());
        for(int i=0;i<k-1;i++)
        {
            sum_v+=mn[i];
        }
        cout << sum_v+1 << endl;
    }
    return 0;
}