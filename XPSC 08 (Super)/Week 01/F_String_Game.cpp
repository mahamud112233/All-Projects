#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, ss;
    cin >> s >> ss;
    int n = s.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    auto check = [&](int mm)
    {
        int to = 0;
        vector<bool> arr(n, true);
        for (int i = 0; i < mm; i++)
        {
            arr[v[i]] = false;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] && s[i] == s[to])
            {
                to++;
            }
            if (to >= ss.size())
            {
                return true;
            }
        }
        return false;
    };
    int co = ss.size();
    int l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}