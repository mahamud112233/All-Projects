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
        int r, y;
        cin >> r >> y;
        if (y > r)
            cout << ((y - r) / 2) + r << '\n';
        else
            cout << r << '\n';
    }
    return 0;
}