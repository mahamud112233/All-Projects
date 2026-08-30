#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        multiset<long long int> m;
        int even = 0, odd = 0;
        long long int odd_m = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even++;
                m.insert(x);
            }
            else
            {
                if (odd_m < x)
                    odd_m = x;
                odd++;
            }
        }
        if (even == 0 || odd == 0)
        {
            cout << 0 << endl;
            continue;
            ;
        }
        long long int upd = odd_m;
        int ans = m.size();
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (upd > *i)
                upd = upd + *i;
            else
            {
                ans++;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}