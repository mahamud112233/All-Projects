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
        int n, s;
        cin >> n >> s;
        deque<int> v;
        int to = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            to += x;
            mp[to] = i;
        }
        if (to < s)
        {
            cout << -1 << '\n';
        }
        else if (to == s)
        {
            cout << 0 << '\n';
        }
        else
        {
            int wind = 0;
            int sum = 0;
            int lf = 0;
            for (int rt = 0; rt < n; rt++)
            {
                sum += v[rt];
                while (sum > s)
                {
                    sum -= v[lf];
                    lf++;
                }
                wind = max(wind, rt - lf + 1);
            }
            cout << n - wind << '\n';
        }
    }
    return 0;
}