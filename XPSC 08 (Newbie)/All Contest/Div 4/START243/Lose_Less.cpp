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
        int m, n;
        cin >> m >> n;
        int a = 0;
        for (int i = 0; i <= m; i++)
        {
            int ti = n - (i * 3);
            if (ti < 0)
                break;
            a = ti + i;
            if (a <= m)
            {
                break;
            }
        }
        cout << m - a << '\n';
    }
    return 0;
}