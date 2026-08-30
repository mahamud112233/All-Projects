#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    int size = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[v[i]]++;
        if (mp[v[i]] == 1)
            size++;
        ans[i] = size;
    }
    while (m--)
    {
        int idx;
        cin >> idx;
        cout << ans[idx - 1] << endl;
    }
    return 0;
}