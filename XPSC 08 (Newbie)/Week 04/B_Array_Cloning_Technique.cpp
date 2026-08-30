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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int max_e = 0;
        for (auto [a, b] : mp)
        {
            if (max_e < b)
                max_e = b;
        }
        int op = 0;
        while (max_e < n)
        {

            if (n <= max_e * 2)
            {
                int need = n - max_e;
                op += (need + 1);
                break;
            }
            op += (max_e + 1);
            max_e *= 2;
        }
        cout << op << endl;
    }
    return 0;
}