#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> ans(n + 1, 1);
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == -1)
            ans[i] = 0;
        if (b == 0)
        {
            ans[i] = 0;
            if (a != -1)
                ans[a] = 0;
        }
    }
    bool f = false;
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == 1)
        {
            cout << i << ' ';
            f = true;
        }
    }
    if (!f)
        cout << -1;
    cout << '\n';
    return 0;
}