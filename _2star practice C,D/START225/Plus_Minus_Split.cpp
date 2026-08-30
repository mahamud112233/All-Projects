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
        if (mp.size() == 1)
        {
            cout << "Yes\n";
        }
        else if (mp.size() == 2)
        {
            vector<int> te;
            for (auto [aa, bb] : mp)
                te.push_back(aa);
            if (te[0] == (te[1] * (-1)))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}