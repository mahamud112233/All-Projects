#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long l, r;
    cin >> l >> r;
    cout << "YES\n";
    for (; l < r;)
    {
        cout << l << " " << l + 1 << '\n';
        l += 2;
    }
    return 0;
}