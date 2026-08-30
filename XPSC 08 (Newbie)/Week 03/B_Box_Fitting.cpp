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
        int n, w;
        cin >> n >> w;
        vector<int> v(n);
        multiset<int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m.insert(v[i]);
        }
        int height = 0;
        while (!m.empty())
        {
            auto i = m.end();
            i--;
            int need = w - *i;
            m.erase(i);
            while (1)
            {
                if (need == 0)
                {
                    height++;
                    break;
                }
                else if (need > 0)
                {
                    auto it = m.lower_bound(need);
                    if(it==m.begin() && need!=*it)
                    {
                        height++;
                        break;
                    }
                    else if (it != m.end() && need == *it)
                    {
                        need = need - *it;
                        m.erase(it);
                    }
                    else if (it != m.begin())
                    {
                        it--;
                        need=need-*it;
                        m.erase(it);
                    }
                }
            }
        }
        cout << height << endl;
    }
    return 0;
}