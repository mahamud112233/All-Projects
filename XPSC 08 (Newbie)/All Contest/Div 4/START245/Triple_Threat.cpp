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
        int n, x;
        cin >> n >> x;
        vector<int> v((n * 3) + 1, 0);
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (c < x)
            {
                v[i] = 1;
                c++;
            }
        }
        if (c < x)
        {
            for (int j = 0; j < n; j++)
            {
                bool f = false;
                for (int i = (n * 3) - j; i > n; i -= n)
                {
                    if (c == x)
                    {
                        f = true;
                        break;
                    }
                    v[i] = 1;
                    c++;
                }
                if (f)
                    break;
            }
        }
        for (int i = 1; i <= n * 3; i++)
        {
            cout << v[i];
        }
        cout << '\n';
    }
    return 0;
}