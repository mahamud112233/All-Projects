#include <bits/stdc++.h>
using namespace std;
int dp[1000005];
bool fun(int n, int i)
{
    if (i > n)
        return false;
    if (i == n)
        return true;
    if (dp[i] != -1)
        return dp[i];

    bool op1 = fun(n, i + 3);
    bool op2 = fun(n, i * 2);
    if ((op1 || op2))
        dp[i] = 1;
    else
        dp[i] = 0;
    return dp[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            dp[i] = -1;
        }
        bool flag = fun(n, 1);
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}