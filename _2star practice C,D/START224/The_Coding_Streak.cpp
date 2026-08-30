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
        int ans = 0;
        for (int i = 0; i < n;)
        {
            if (v[i] != 0)
            {
                int tem = 0;
                for (int j = i; j < n; j++)
                {
                    if (v[j] == 0)
                    {
                        break;
                    }
                    else
                    {
                        tem++;
                    }
                }
                ans = max(ans, tem);
                i += tem;
            }
            else
                i++;
        }
        cout << ans << '\n';
    }
    return 0;
}