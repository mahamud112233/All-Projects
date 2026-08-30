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
        int id =__lg(n);
        int ans = n^(1<<id);
        int id2 =__lg(ans);
        int zero = 0;
        for (int i = 0; i < id2; i++)
        {
            if (!((ans >> i) & 1))
            {
                zero++;
            }
        }
        cout << max(1<<zero, 1) << '\n';
    }
    return 0;
}