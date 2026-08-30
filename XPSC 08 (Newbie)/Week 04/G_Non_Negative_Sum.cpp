#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(sum+v[i]<0)
            {
                break;
            }
            sum+=v[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}