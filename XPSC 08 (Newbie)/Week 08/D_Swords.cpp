#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long mx = *max_element(v.begin(), v.end());
    long long ans = 0, gd = 0;
    for (int i = 0; i < n; i++)
    {

        long long te = mx - v[i];
        ans += te;
        gd = __gcd(gd, te);
    }

    cout << ans / gd << " " << gd << '\n';
    return 0;
}