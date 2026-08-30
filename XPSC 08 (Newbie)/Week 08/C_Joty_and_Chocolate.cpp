#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    long long ans1 = n / a, ans2 = n / b;
    long long lcm = n / ((a / __gcd(a, b)) * b);
    long long to = 0;
    if (x > y)
        to = (ans1 * x) + ((ans2 - lcm) * y);
    else
        to = ((ans1 - lcm) * x) + (ans2 * y);
    cout << to << '\n';
    return 0;
}