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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        int l = n-k;
        for (int i = 0; i < l; i++)
        {
           sum+=v[i]; 
        }
        int mx=sum;
        for(int i=l;i<n;i++)
        {
            mx+=v[i]-v[i-l];
            sum=max(sum,mx);
        }
        cout << sum << '\n';
    }
    return 0;
}