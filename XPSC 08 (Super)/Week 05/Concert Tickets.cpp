#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v1(m);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < m; i++)
        cin >> v1[i];
    int k = 0;
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        auto a = mp.upper_bound(v1[i]);
        if (a == mp.begin())
        {
            ans.push_back(-1);
            continue;
        }
        a--;
        
            ans.push_back(a->first);
            mp[a->first]--;
            if(mp[a->first]==0)
            mp.erase(a->first);
    }
    for(int xx:ans)
        cout << xx << ' ';
    cout << '\n';
    return 0;
}