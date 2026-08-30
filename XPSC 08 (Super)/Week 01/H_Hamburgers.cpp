#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    long long b = 0, ss = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            b++;
        else if (s[i] == 'S')
            ss++;
        else
            c++;
    }
    long long h_b, h_s, h_c, b_b, b_s, b_c;
    cin >> h_b >> h_s >> h_c >> b_b >> b_s >> b_c;
    long long taka;
    cin >> taka;

    auto check = [&](long long mid)
    {
        long long n1 = max(0LL, (mid * b) - h_b), n2 = max(0LL, (mid * ss) - h_s), n3 = max(0LL, (mid * c) - h_c);
        long long tk = (n1 * b_b) + (n2 * b_s) + (n3 * b_c);
        return tk <= taka;
    };
    long long l = 0, r = 1e13, mid, tem;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(mid))
        {
            tem = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << tem << '\n';
    return 0;
}