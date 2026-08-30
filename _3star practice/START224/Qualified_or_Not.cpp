#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, x, y;
    cin >> n >> x >> y;

    if (x>0 && y> 0 && n >= (2 * x) && n >= (2 * y))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}