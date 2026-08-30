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
        if (n % 2 == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        vector<int> v;
        bool f = false;
        for (int i = n; i > 0; i /= 10)
        {
            v.push_back(i % 10);
            if (v.back() % 2 == 1)
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            cout << 1 << "\n";
            continue;
        }
        int mn = n % 10;
        int mx = mn + 11;
        sort(v.begin(), v.end(), greater<int>());
        int op = 0;
        int an = 0;
        bool ff = false;
        for (int i = 0; i < v.size(); i++)
        {
            op++;
            an += v[i];
            if (an > mn && an < mx)
            {
                ff = true;
                break;
            }
        }
        if (ff)
            cout << op + 1 << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}