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
        long long n;
        cin >> n;
        // if(n==1)
        // {
        //     cout << 1 << '\n' << 1 << '\n';
        //     continue;
        // }
        set<long long> ans;
        ans.insert(n);
        for (int i = 0; i < 64; i++)
        {
            if ((n >> i) & 1 && ((1LL<<i)^n)!=0)
            {
                long long te=((1LL<<i)^n);
                ans.insert(te);
            }
        }
        cout << ans.size() << '\n';
        for (auto x : ans)
        {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}