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
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        bool f = true;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] > i)
            {
                int te = v[i];
                while (te > i)
                {
                    te /= 2;
                    if (te < i)
                    {
                        f = false;
                        break;
                    }
                }
            }
            else if (v[i] < i)
            {
                int te = v[i];
                while (te < i)
                {
                    te *= 2;
                    if (te > i)
                    {
                        f = false;
                        break;
                    }
                }
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}