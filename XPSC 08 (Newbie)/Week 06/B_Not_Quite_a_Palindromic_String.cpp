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
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        int obo = abs(zero - one);
        int mx = max(zero, one);
        k = k - (obo / 2);
        if (k < 0)
        {
            cout << "NO\n";
        }
        else if (k == 0)
        {
            cout << "YES\n";
        }
        else if (k > 0)
        {
            if (k % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}