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
        long long int a, n ,p;
        cin >> a >> n >> p;
        long long int ans=a;
        for(int i=1;i<=p;i++)
        {
            if(ans+n > ans*n)
                ans+=n;
            else ans*=n;
        }
        cout << ans << '\n';
    }
    return 0;
}