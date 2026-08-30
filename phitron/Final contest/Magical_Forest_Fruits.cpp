#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> pre(n + 1);
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n";
    }
    return 0;
}