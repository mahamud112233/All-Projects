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
        int x, y, z;
        cin >> x >> y >> z;
        int ans = 0;

        while (x + y <= z || x + z <= y || y + z <= x)
        {
            if (x + y <= z)
            {
                if (x < y)
                {
                    x++;
                    ans++;
                }
                else
                {
                    y++;
                    ans++;
                }
            }
            else if (x + z <= y)
            {
                if (x < z)
                {
                    x++;
                    ans++;
                }
                else
                {
                    z++;
                    ans++;
                }
            }
            else if (y + z <= x)
            {
                if (y < z)
                {
                    y++;
                    ans++;
                }
                else
                {
                    z++;
                    ans++;
                }
            }
            
        }
        cout << ans << endl;
    }
    return 0;
}