#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, x;
    cin >> n >> x;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<long long int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + v[i];
    int co = 0;
    long long int t = 0;
    int l = 0, r = 0;
    while (r < n && l < n)
    {
        t = pre[r] - pre[l] + v[l];
        if (t < x)
            r++;
        else if (t == x)
        {
            co++;
            r++;
            l++;
        }
        else if (t > x)
        {
            l++;
            if (l == r && v[r] > x)
            {
                l++;
                r++;
            }
        }
    }
    cout << co << endl;
    return 0;
}