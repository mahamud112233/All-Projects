#include <bits/stdc++.h>
using namespace std;
long long ans = LLONG_MAX;
int n;
vector<long long> v;
void solve(long long id, long long s, long long s1)
{
    if (id == n)
    {
        ans = min(ans, abs(s - s1));
        return;
    }
    solve(id + 1, s + v[id], s1);
    solve(id + 1, s, s1 + v[id]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    solve(0, 0, 0);
    cout << ans << '\n';
    return 0;
}