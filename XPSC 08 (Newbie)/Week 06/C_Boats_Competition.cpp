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
        vector<int> fre(102, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            fre[v[i]]++;
        }
        int ans = 0;
        for (int l = 2; l <= n * 2; l++)
        {
            int par = 0;
            int jj = 1;
            while (jj < 51)
            {
                if (fre[jj] != 0)
                {
                    int need = l - jj;
                    if (need > jj)
                    {
                        par += (min(fre[jj], fre[need]));
                    }
                    else if (need == jj)
                    {
                        par += (fre[jj] / 2);
                    }
                }
                jj++;
            }
            ans = max(ans, par);
        }
        cout << ans << '\n';
    }
    return 0;
}