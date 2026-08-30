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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int od = 0, ev = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
                ev++;
            else
                od++;
        }
        int r = (od - 1) / 2;
        if (od)
            cout << ev + 1 + r << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}