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
        int n, x, k;
        cin >> n >> x >> k;
        map<int, int, greater<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            mp[xx]++;
        }
        int to = 0;
        int a = 0;
        for (auto [aa, bb] : mp)
        {
            if (a == k)
            {
                break;
            }
            a++;
            to += bb;
        }
        cout << min(to, x) << endl;
    }
    return 0;
}