#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a + c - b + 1;
    if (ans > 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
    return 0;
}