#include <bits/stdc++.h>
using namespace std;
int dp[50];
int fibo(int n)
{
    if (n < 2)
        return n;
    else if (n == 2)
        return 1;
    else if (n == 3)
        return 2;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2) + fibo(n - 3) + fibo(n - 4);
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        dp[i] = -1;
    int ans = fibo(n);
    cout << ans << endl;
    return 0;
}