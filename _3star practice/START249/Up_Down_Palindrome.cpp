#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long l=LLONG_MIN,r=LLONG_MAX;
        bool f = true;
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (v[i] == v[j])
            {
                continue;
            }
            else if ( abs(v[i] - v[j]) != 2)
            {
                f=false;
                break;
            }
            if(v[i]<v[j])
            {
                l=max(l,v[i]);
                r=min(r,v[j]-1);
            }
            else 
            {
                l=max(l,v[j]);
                r=min(r,v[i]-1);
            }
        }
        cout << (f && l<=r ? "Yes\n" : "No\n");
    }
    return 0;
}