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
        map<int, int> mp;
        long long total = 0;
        int mx = 0;
        int mx_e = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            total += v[i];
            if (mp[v[i]] > mx)
            {
                mx = mp[v[i]];
                mx_e = v[i];
            }
        }

        int ot = n - mx;

        if (ot + 2 >= mx)
        {
            cout << total << '\n';
        }
        else
        {
            cout << total - (long long)(mx - ot - 2) * mx_e << '\n';
        }
    }
    return 0;
}