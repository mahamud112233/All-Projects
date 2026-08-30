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
        long long int n, m, x;
        cin >> n >> m >> x;

        x--;
        long long int row = x % n;
        long long int tem = (row)*m;
        long long int col = x / n + 1;
        long long int ans = tem + col;
        cout << ans << endl;
    }
    return 0;
}