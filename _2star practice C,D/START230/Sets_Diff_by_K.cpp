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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                v.push_back(i + 1);
        }
        bool valid = true;
        if (v.empty())
        {
            cout << "No\n";
            continue;
        }
        if (v.front() > k + 1)
            valid = false;
        if (v.back() + k + 1 <= n)
            valid = false;
        for (int i = 1; i < v.size(); i++)
        {
            if (abs(v[i - 1] - v[i]) <= k)
            {
                valid = false;
                break;
            }
            if (v[i - 1] + k + 1 < v[i] - k)
            {
                valid = false;
                break;
            }
        }
        cout << (valid ? "Yes\n" : "No\n");
    }
    return 0;
}