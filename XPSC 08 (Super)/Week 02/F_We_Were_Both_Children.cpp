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
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
            {
                v[x]++;
            }
        }
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (v[i])
            {
                for (int j = i; j <= n; j += i)
                {
                    ans[j] += v[i];
                }
            }
        }
        cout << *max_element(ans.begin(), ans.end()) << '\n';
    }
    return 0;
}