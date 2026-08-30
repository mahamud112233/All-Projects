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
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        if (v[0] == v[1])
        {
            cout << "Yes\n";
            continue;
        }
        bool f = false;
        long long ans = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (v[i] % v[0] == 0)
            {
                if (ans == 0)
                    ans = v[i];
                else
                    ans = __gcd(ans, v[i]);
            }
            if (ans == v[0])
            {
                f = true;
                break;
            }
        }
        cout << (f ? "Yes\n" : "No\n");
    }
    return 0;
}