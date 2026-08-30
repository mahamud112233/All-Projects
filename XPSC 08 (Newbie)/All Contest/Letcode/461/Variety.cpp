#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, k, m;
    cin >> n >> k >> m;
    vector<long long int> c(n + 1), v(n + 1);
    for (long long int i = 1; i <= n; i++)
    {
        cin >> c[i] >> v[i];
    }
    vector<long long int> ans;
    for (long long int i = m; i <= n; i++)
    {
        ans.push_back(v[i]);
    }
    sort(ans.begin(), ans.end(), greater<long long int>());
    long long int total = 0;
    for (long long int i = 0; i < k && i<ans.size(); i++)
    {
        total += ans[i];
    }
    cout << total << '\n';
    return 0;
}