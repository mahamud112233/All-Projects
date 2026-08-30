#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> ms;
    for (int i = 1; i <= n; i++)
    {
        int xx;
        cin >> xx;
        ms.push_back({xx, i});
    }
    sort(ms.begin(),ms.end());
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        bool got = false;
        int need = x - ms[i].first;
        int j = i+1, k = n-1;
        while (j < k)
        {
            if (ms[j].first + ms[k].first == need)
            {
                s.insert(ms[i].second);
                s.insert(ms[j].second);
                s.insert(ms[k].second);
                got = true;
                break;
            }
            else if (ms[j].first + ms[k].first > need)
                k--;
            else
                j++;
        }
        if (got)
            break;
    }
    if (!s.size())
        cout << "IMPOSSIBLE\n";
    else
        for (auto ans : s)
            cout << ans << " ";
    cout << '\n';
    return 0;
}