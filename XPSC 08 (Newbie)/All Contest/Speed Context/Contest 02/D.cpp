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
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            while (b < a)
            {
                b *= 2;
            }
            if (a == b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (a < b)
        {
            while (b > a)
            {
                a *= 2;
            }
            if (a == b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}