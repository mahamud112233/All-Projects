#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int ans = n - (a * b);
    if (n >= 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
    return 0;
}