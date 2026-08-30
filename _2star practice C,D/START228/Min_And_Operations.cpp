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
        int ans=0;
        for(int i=n;i>0;i-=2)
        {
            ans+=i;
        }
        cout << ans << '\n';
    }
    return 0;
}