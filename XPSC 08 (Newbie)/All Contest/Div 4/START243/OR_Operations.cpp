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
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx |= v[i];
        }
        int to_g = 0, re = 0;
        for (int i = 0; i < n; i++)
        {
            re |= v[i];
            if (re == mx)
            {
                to_g++;
                re = 0;
            }
        }
        cout << n - to_g << '\n';
    }
    return 0;
}