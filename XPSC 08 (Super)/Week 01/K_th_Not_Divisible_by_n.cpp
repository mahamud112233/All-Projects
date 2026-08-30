#include <bits/stdc++.h>
using namespace std;
long long sum(long long f, long long r)
{
    if(f>r) return 0;
    if (f == r)
        return f;
    return (f + r) * (r - f + 1) / 2ll;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        auto check = [&](long long m)
        {
            if(sum(k, m) <= sum(m + 1, n + k - 1)) return true;
            else return false;
        };
        auto check2 = [&](long long m)
        {
            if(sum(k, m - 1) >= sum(m, n + k - 1)) return true;
            else return false;
        };
        long long l = k, r = n + k, mid;
        while (l + 1 < r)
        {
            mid = l + (r - l) / 2;
            if (check(mid))
                l = mid;
            else
                r = mid;
        }
        
        long long l2 = k, r2 = n + k, mid2;
        while (l2 + 1 < r2)
        {
            mid2 = l2 + (r2 - l2) / 2;
            if (check2(mid2))
                r2 = mid2;
            else
                l2 = mid2;
        }
        cout << min((sum(l + 1, n + k - 1) - sum(k, l)), (sum(k, r2 - 1) - sum(r2, n + k - 1))) << '\n';
    }
    return 0;
}