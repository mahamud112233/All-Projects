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
        int ans=INT_MIN;
        for(int i=0;i<4;i++) 
        {
            int x;
            cin >> x;
            ans=max(ans,x);
        }
        cout << ans << '\n';
    }
    return 0;
}