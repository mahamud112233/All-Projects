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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool f = false;
        for (int i = 0; i <= k; i++)
        {
            long long sum = i;
            bool ff = true;
            for (int j = 0; j < n; j++)
            {
                sum += v[j];
                if (sum < 0 || sum > k)
                {
                    ff = false;
                    break;
                }
            }
            if (ff)
            {
                f = true;
                break;
            }
        }
        if (f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}