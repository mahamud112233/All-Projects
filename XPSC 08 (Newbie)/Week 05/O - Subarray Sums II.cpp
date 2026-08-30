#include <bits/stdc++.h>
using namespace std;
int main()
{
    //comment
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
    map<long long int, long long int> mp;
    mp[0]++;
    long long int co = 0;
    for (int i = 0; i < n; i++)
    {
        long long int t = pre[i] - x;
        if (mp.count(t))
        {
            co += mp[t];
        }
        mp[pre[i]]++;
    }
    cout << co << endl;
    return 0;
}