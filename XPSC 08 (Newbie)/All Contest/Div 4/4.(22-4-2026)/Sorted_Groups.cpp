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
        string s;
        cin >> s;
        int c = n / 2;
        string s1, s2;
        for (int i = 0; i < c; i++)
        {
            s1.push_back(s[i]);
        }
        sort(s1.begin(), s1.end());
        for (int i = c; i < n; i++)
        {
            s2.push_back(s[i]);
        }
        sort(s2.begin(), s2.end());
        for (auto x : s1)
            cout << x;
        for (auto x : s2)
            cout << x;
        cout << endl;
    }

    return 0;
}