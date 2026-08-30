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
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        int ans=0;
        for(auto aa:v)
        {
            if(aa%x==0)
            {
                ans=aa;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}