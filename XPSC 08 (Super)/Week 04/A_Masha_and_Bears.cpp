#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(3, 0);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    int n;
    cin >> n;
    bool f = false;
    for (int i = v[0]; i <= 2 * v[0]; i++)
    {
        for (int j = v[1]; j <= v[1] * 2; j++)
        {
            for (int k = max(v[2], n); k <= min(v[2] * 2, n * 2); k++)
            {
                if (i > j && j > k && i > n * 2 && j > n * 2)
                {
                    v[0] = i;
                    v[1] = j;
                    v[2] = k;
                    f = true;
                    break;
                }
            }
            if (f)
                break;
        }
        if (f)
            break;
    }
    if (f)
        for (int a : v)
            cout << a << '\n';
    else
        cout << -1 << '\n';
    return 0;
}