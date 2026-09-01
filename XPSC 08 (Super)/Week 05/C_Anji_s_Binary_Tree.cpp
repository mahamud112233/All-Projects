#include <bits/stdc++.h>
using namespace std;
const int nod = 3 * 10e5;
vector<int> v[nod];
vector<int> op(nod);
string s;
void dfs(int r)
{
    if (v[r][0] != 0)
    {
        int l = v[r][0];
        if (s[r - 1] != 'L')
            op[l] = op[r] + 1;
        else
            op[l] = op[r];
        dfs(l);
    }
    if (v[r][1] != 0)
    {
        int rr = v[r][1];
        if (s[r - 1] != 'R')
            op[rr] = op[r] + 1;
        else
            op[rr] = op[r];
        dfs(rr);
    }
}
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
        for (int i = 0; i <= n; i++)
        {
            v[i].clear();
            op[i] = 0;
        }
        s.clear();
        cin >> s;
        for (int i = 1; i <= n; i++)
        {
            int l, r;
            cin >> l >> r;
            v[i].push_back(l);
            v[i].push_back(r);
        }
        dfs(1);
        int ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            if (v[i][0] == 0 && v[i][1] == 0)
            {
                ans = min(ans, op[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}