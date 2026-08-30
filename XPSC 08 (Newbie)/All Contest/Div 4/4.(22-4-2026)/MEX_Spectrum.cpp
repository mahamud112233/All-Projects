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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int mis = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mp.count(i))
            {
                cout << max(mis, mp[i]) << " ";
            }
            else
            {
                cout << mis << " ";
                mis++;
            }
        }
        cout << endl;
    }
    return 0;
}