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
        vector<int> v(n,0);
        for(int i=0;i<n;i++) 
        {
            int x;
            cin >> x;
            v[x-1]++;
        }
        int ans=0,mx=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>mx)
            {
                ans=i+1;
                mx=v[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}