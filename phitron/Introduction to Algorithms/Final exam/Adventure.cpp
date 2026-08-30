#include <bits/stdc++.h>
using namespace std;
int ar[1005][1005];
int fun(int i, int mx_w, int val[], int wi[])
{

    if (i < 0)
        return 0;
    if (ar[i][mx_w] != -1)
        return ar[i][mx_w];
    if (wi[i] <= mx_w)
    {
        int op1 = fun(i - 1, mx_w - wi[i], val, wi) + val[i];
        int op2 = fun(i - 1, mx_w, val, wi);
        ar[i][mx_w] = max(op1, op2);
        return ar[i][mx_w];
    }
    else
    {
        return ar[i][mx_w] = fun(i - 1, mx_w, val, wi);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx_w;
        cin >> n >> mx_w;
        int val[n], wi[n];
        for (int i = 0; i < n; i++)
        {
            cin >> wi[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= mx_w; j++)
                ar[i][j] = -1;

        int ans = fun(n - 1, mx_w, val, wi);
        cout << ans << endl;
    }
    return 0;
}