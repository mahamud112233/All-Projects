#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (abs(x - y) > 2)
        cout << "Boring\n";
    else
        cout << "Interesting\n";
    return 0;
}