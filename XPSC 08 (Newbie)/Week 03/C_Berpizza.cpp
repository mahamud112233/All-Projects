#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;

    set<int> s;
    vector<int> v;
    v.push_back(-1);
    map<int, deque<int>> mp;
    int id = 1;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int tk;
            cin >> tk;
            v.push_back(tk);
            s.insert(id);
            mp[tk].push_back(id);
            id++;
        }
        else if (a == 2)
        {
            int idx = *s.begin();
            cout << idx << " ";
            int tk = v[idx];
            s.erase(idx);
            mp[tk].pop_front();
            if (mp[tk].empty())
                mp.erase(tk);
        }
        else if (a == 3)
        {
            auto it = mp.rbegin();
            cout << it->second.front() << " ";
            s.erase(it->second.front());
            int taka = it->first;
            mp[taka].pop_front();
            if (mp[taka].empty())
                mp.erase(taka);
        }
    }
    return 0;
}