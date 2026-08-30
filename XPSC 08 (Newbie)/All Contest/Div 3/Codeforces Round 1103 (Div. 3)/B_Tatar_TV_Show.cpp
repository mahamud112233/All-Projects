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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool f = true;
        for (int i = 0; i < k; i++)
        {
            int to = 0;
            for (int j = i; j < n; j += k)
            {
                if (s[j] == '1')
                    to++;
            }
            if (to % 2 == 1)
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}