#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c;
    cin >> a >> b >> c;
    long long re = a % b;
    bool f = false;
    int ans = 0;
    while (ans <= b)
    {
        re*=10;
        if ((re / b) == c)
        {
            f = true;
            break;
        }
        re %= b;
        ans++;
    }
    if(f) cout << ans+1 << '\n';
    else cout << -1 << '\n';
    return 0;
}