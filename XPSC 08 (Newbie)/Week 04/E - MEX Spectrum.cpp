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
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int nai = 0;
        for (int i = 0; i <= n; i++)
        {
            if(!mp.count(i))
            {
                cout << nai << " ";
                nai++;
            }
            else
            {
                cout << max(nai,mp[i]) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}