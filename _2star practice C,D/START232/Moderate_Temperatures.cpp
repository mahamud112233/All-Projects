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
        map<int, int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        auto i = v.begin();
        auto j = v.end();
        i++;
        j--;
        int ans = 0;
        for (; i != j; i++)
        {
            ans += i->second;
        }
        cout << ans << '\n';
    }
    return 0;
}