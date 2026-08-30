#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> count(n + 1, 0);
    for (int i = 2; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            count[i] = count[i - 1];
        }
        else if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            count[i] = count[i - 1] + 1;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (n <= 2)
        {
            cout << 0 << endl;
            continue;
        }
        if (l == 1)
            l = l + 1;
        if (n > 2 && r == n)
            r = r - 1;
        int cnt = count[r] - count[l - 1];

        cout << cnt << endl;
    }
    return 0;
}