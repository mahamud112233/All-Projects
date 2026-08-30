#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //abc
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (k--)
    {
        int val;
        cin >> val;
        bool f = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (val == v[mid])
            {
                f = true;
                break;
            }
            else if (val > v[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}