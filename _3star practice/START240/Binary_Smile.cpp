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
        string a, b;
        cin >> a >> b;
        int a1 = 0, b1 = 0;
        vector<int> pos1, pos2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                a1++;
                pos1.push_back(i);
            }
            if (b[i] == '1')
            {
                b1++;
                pos2.push_back(i);
            }
        }
        if (a1 != b1)
        {
            cout << -1 << '\n';
            continue;
        }
        int ans = 0;
        for (int i = 0; i < pos1.size(); i++)
        {
            if (pos1[i] != pos2[i])
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}