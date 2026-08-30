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
        vector<int> pre(n), suf(n);
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (mn > v[i])
            {
                mn = v[i];
            }
            pre[i] = mn;
        }
        int mx = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mx < v[i])
            {
                mx = v[i];
            }
            suf[i] = mx;
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == pre[i])
            {
                ans += '1';
            }
            else if (v[i] == suf[i])
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}