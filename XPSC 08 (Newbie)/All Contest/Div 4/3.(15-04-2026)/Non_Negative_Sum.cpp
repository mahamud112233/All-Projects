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
        sort(v.begin(), v.end(), greater<int>());
        int ans = 0;
        int a = 0;
        if (v[0] < 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (ans + v[i] >= 0)
            {
                ans += v[i];
                a = i + 1;
            }
            else
            {
                break;
            }
        }
        cout << a << endl;
    }
    return 0;
}