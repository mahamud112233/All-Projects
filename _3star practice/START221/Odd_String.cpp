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
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int od = 0;
        for (auto [a, b] : mp)
            if (b > 2)
            {
                od = 1;
                break;
            }
        if (od == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}