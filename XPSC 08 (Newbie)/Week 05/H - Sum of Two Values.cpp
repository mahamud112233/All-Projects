#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    map<int, vector<int>> ms;
    for (int i = 1; i <= n; i++)
    {
        int xx;
        cin >> xx;
        ms[xx].push_back(i);
    }
    set<int> ans;
    for (auto i = ms.begin(); i != ms.end(); i++)
    {
        int a = i->first;
        int b = x - a;
        if (a == b)
        {
            if (i->second.size() > 1)
            {
                ans.insert(i->second.front());
                ans.insert(i->second.back());
                break;
            }
            else
                continue;
        }
        if (ms.count(b))
        {
            ans.insert(i->second.front());
            ans.insert(ms.find(b)->second.front());
            break;
        }
    }
    if (ans.size() == 0)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        for (auto aa : ans)
        {
            cout << aa << " ";
        }
        cout << '\n';
    }
    return 0;
}