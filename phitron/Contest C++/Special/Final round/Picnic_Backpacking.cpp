#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long int> tom(n), jerry(m);

        for (int i = 0; i < n; i++)
            cin >> tom[i];
        for (int i = 0; i < m; i++)
            cin >> jerry[i];

        long long int target;
        cin >> target;

        unordered_map<long long int, int> freq;
        for (long long int b : jerry)
            freq[b]++;

        long long ans = 0;
        for (long long int a : tom)
        {
            long long int needed = target - a;
            if (freq.count(needed))
            {
                ans += freq[needed];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}