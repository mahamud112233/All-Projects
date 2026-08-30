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
        int n, a;
        cin >> n >> a;
        string s;
        cin >> s;
        int co = 0;
        for (int i = 0; i < a; i++)
        {
            if (s[i] != 'L')
                co++;
        }
        int coo = 0;
        for (int i = a - 1; i < n; i++)
        {
            if (s[i] != 'R')
                coo++;
        }
        cout << min(co, coo) << '\n';
    }
    return 0;
}