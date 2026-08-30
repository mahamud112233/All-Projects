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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0, last = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i]<=last+1)
            {
                ans++;
                last = max(last, v[i]);
            }
            
        }
         cout << ans << '\n';
    }
    return 0;
}