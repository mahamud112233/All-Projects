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
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        int pr = 0;
        for (int i = 0; i < k; i++)
        {
            if (v[i] > 5)
                pr += (v[i] - 5);
        }
        for (int i = k; i < n; i++)
        {
            if (v[i] > 10)
                pr += (v[i] - 10);
        }
        cout << pr << '\n';
    }
    return 0;
}