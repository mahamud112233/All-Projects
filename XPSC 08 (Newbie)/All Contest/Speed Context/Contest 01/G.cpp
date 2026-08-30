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
        string s;
        cin >> s;

        int c0 = count(s.begin(), s.end(), '0');
        int c1 = n - c0;

        int max_group = (n + k - 1) / k;
        int limit = (max_group + 1) / 2;

        if (max(c0, c1) <= limit * k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}