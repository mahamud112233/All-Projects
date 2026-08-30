#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    bool f = false;

    int ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = i;
            break;
        }
    }

    if (ans>1 && n % 2 != 0 && n > n - 2)
    {
        int an = 0;
        int nn = n - 2;
        for (int i = 2; i * i <= nn; i++)
        {
            if (nn % i == 0)
            {
                an = 3;
                break;
            }
        }
        if (an)
            ans = 3;
        else
            ans = 2;
    }
    cout << ans << '\n';
    return 0;
}