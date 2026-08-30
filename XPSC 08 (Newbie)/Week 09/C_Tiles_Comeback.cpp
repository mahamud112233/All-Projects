#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int l = 0, r = n - 1;
        int f1 = 1, l1 = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] == v[0] && f1 < k)
            {
                f1++;
                l = i;
            }
            else if (f1 == k)
                break;
        }
        for (int i = n - 2; i > l; i--)
        {
            if (v[i] == v[n - 1] && l1 < k)
            {
                l1++;
                r = i;
            }
            else if (l1 == k)
                break;
        }
        if (v[0] == v[n - 1] && f1 + l1 >= k)
        {
            cout << "YES\n";
        }
        else if (v[0] != v[n - 1] && f1 >= k && l1 >= k)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}