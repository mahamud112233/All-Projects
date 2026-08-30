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
        int fin;
        if (mp.begin()->second < mp.rbegin()->second)
            fin = mp.begin()->first;
        else
            fin = mp.rbegin()->first;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == fin)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}