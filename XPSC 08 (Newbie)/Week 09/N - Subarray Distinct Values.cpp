#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> mp;
    long long ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        mp[v[r]]++;
        while (mp.size() > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
                mp.erase(v[l]);
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << '\n';
    return 0;
}