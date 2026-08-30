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
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[i] = x;
        }
        bool f = true;
        while (f && mp.size() > 1)
        {
            f = false;

            for (auto i = mp.begin(); i != mp.end(); i++)
            {
                auto it = i;
                it++;
                while (it != mp.end())
                {
                    if ((it->second & i->second) == 0)
                    {
                        n++;
                        mp[n] = it->second + i->second;
                        mp.erase(i);
                        mp.erase(it);
                        f = true;
                        break;
                    }
                    it++;
                }
                if (f)
                    break;
            }
        }

        if (mp.size() == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}