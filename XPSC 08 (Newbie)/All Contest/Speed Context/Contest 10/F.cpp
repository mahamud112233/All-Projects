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
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                z++;
            else
                o++;
        }
        if (z == 0 || o == 0)
            cout << n << '\n';
        else
            cout << 1 << '\n';
    }
    return 0;
}