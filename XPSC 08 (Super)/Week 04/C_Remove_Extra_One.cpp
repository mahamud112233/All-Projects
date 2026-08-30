#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> vv(n + 1, 0);
    int f_m = 0;
    int s_m = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > f_m)
        {
            vv[v[i]]--;
            s_m = f_m;
            f_m = v[i];
        }
        else if (v[i] < f_m && v[i] > s_m)
        {
            vv[f_m]++;
            s_m = v[i];
        }
    }
    int val = -1;
    int ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (ans < vv[i])
        {
            ans = vv[i];
            val = i;
        }
    }
    cout << val << '\n';
    return 0;
}