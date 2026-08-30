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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        long long ans=0;
        int id=1;
        for(int i=1;i<n;i++)
        {
            if((v[i]+id-(i+1))>0)
            {
                
                ans+=(v[i]+id-(i+1));
                id=i+1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}