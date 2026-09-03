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
        cin >> n;
        long long ans;
        if (n % 2 == 0)
        {
            ans = ((n * 3) / 2) + 1;
        }
        else
            ans = ((n * 3) - 1) / 2;
            cout << ans << '\n';
    }
    
    return 0;
}