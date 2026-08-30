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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n-1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int av = (v[i] + v[i + 1]) / 2;
                v[i+1] += (v[i] - av);
                v[i] = av;
                i++;
            }
        }
        bool f = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                f = false;
                break;
            }
        }
        f ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}