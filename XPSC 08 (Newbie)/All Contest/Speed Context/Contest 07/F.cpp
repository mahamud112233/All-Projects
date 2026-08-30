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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if (mp.size() == 1)
            cout << "Yes\n";
        else if (mp.size() == 2)
        {
            vector<int> ans;
            for (auto [a, b] : mp)
            {
                ans.push_back(a);
            }
            if (ans[0] == ((-1) * ans[1]))
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}