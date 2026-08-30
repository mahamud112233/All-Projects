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
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int ans1 = -1, ans2 = -1, l = 0, r = n - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] < x)
            {
                ans1 = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        l = 0, r = n - 1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= x)
            {
                l = mid + 1;
            }
            else if (v[mid] > x)
            {
                ans2 = mid;
                r = mid - 1;
            }
        }
        if(ans1>-1) cout << v[ans1] << " ";
        else cout << "X ";
        if(ans2>-1) cout << v[ans2];
        else cout << "X";
        cout << '\n';
    }
    return 0;
}