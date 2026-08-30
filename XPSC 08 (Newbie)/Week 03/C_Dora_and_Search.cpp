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
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        int lf = 1, rt = n;
        bool f;
        while (lf < rt)
        {
            f = true;
            int mx = mp.rbegin()->first;
            int mn = mp.begin()->first;
            if (mx == v[lf] || mn == v[lf])
            {
                mx == v[lf] ? mp.erase(mx) : mp.erase(mn);
                lf++;
                f = false;
            }
            if (mx == v[rt] || mn == v[rt])
            {
                mx == v[rt] ? mp.erase(mx) : mp.erase(mn);
                rt--;
                f = false;
            }
            if (f == true)
            {
                break;
            }
        }
        if(lf>=rt) cout << -1 << endl;
        else cout << lf << " " << rt << endl;
    }
    return 0;
}