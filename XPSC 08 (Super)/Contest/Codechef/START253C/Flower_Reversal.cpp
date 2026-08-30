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
        string s;
        cin >> n >> s;
        vector<int> v;

        int b = 0, im = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                im++;
            else
                b++;
        }

        int ans = min(2, max(0, im - 1));

        cout << ans + b << '\n';
    }
    return 0;
}