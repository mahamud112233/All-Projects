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
        priority_queue<int> p;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                p.push(v[i]);
            }
            else if (v[i] == 0)
            {
                if (!p.empty())
                {
                    ans += p.top();
                    p.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}