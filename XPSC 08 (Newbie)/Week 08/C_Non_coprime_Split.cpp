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
        long long a, b;
        cin >> a >> b;
        if (b < 4)
        {
            cout << -1 << '\n';
        }
        else if (a == b && __gcd(a, b) != 1)
        {
            int ex = 0;
            for (int i = 2; i * i <= a; i++)
            {
                if (a % i == 0)
                {
                    ex = i;
                    break;
                }
            }
            if (ex)
                cout << ex << " " << a - ex << '\n';
            else
                cout << -1 << '\n';
        }
        else
        {
            cout << 2 << " " << (b % 2 == 0 ? b - 2 : b - 3) << '\n';
        }
    }
    return 0;
}