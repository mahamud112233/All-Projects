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
        int a, b, c;
        cin >> a >> b >> c;
        if (c % 3 != 0)
        {
            cout << "No\n";
            continue;
        }
        int ans = (a * 2) + (c / 3);
        if (b == ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}