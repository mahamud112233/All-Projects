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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long int l = 0;
        long long int co = 0;
        long long int tot = 0;
        while (l < n )
        {
            while (l < n && v[l] <= q)
            {
                co++;
                l++;
            }
            if (co >= k)
            {
                long long int sub=co-k+1;
                tot+=(sub*(sub+1))/2;
            }
            co = 0;
            l++;
        }
        
        cout << tot << "\n";
    }
    return 0;
}