#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n), r(n, 0);
    r[0] = 1;
    long long sum = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        int rem = ((sum % n) + n) % n;
        ans += r[rem];
        r[rem]++;
    }
    cout << ans << '\n';
    return 0;
}