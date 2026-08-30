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
        long long n;
        int k;
        cin >> n >> k;

        vector<long long> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i];

        sort(v.rbegin(), v.rend());

        vector<long long> pre(k);
        pre[0] = n - v[0];

        for (int i = 1; i < k; i++)
            pre[i] = pre[i - 1] + (n - v[i]);

        int cat_p=0;
        int save=0;
        for(int i=0;i<k;i++)
        {
            if(v[i]<=cat_p)
            {
                break;
            }
            save++;
            cat_p=pre[i];
        }
        cout << save << '\n';
    }
    return 0;
}