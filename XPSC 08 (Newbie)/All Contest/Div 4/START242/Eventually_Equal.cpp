#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    while (b)
    {
        long long int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int ans = 0;
        if (a == b)
        {
            cout << ans << '\n';
            continue;
        }
        if (a % 2 == 0 && b % 2 == 0)
        {
            if (c % 2 == 1)
                cout << 1 << "\n";
            else
                cout << 2 << '\n';
        }
        else if (a % 2 == 1 && b % 2 == 1)
        {
            if ()
            {
            }
        }
    }
    return 0;
}