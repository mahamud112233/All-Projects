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
        long long ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                if (v[i] % 2 == 0)
                    ans1++;
            }
            else
            {
                if (v[i] % 2 == 1)
                    ans1++;
            }
            if (i % 2 == 1)
            {
                if (v[i] % 2 == 1)
                    ans2++;
            }
            else
            {
                if (v[i] % 2 == 0)
                    ans2++;
            }
        }
        cout << min(ans1, ans2) << '\n';
    }
    return 0;
}