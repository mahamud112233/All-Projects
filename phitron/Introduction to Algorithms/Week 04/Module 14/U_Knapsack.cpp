#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];
int n, max_weight;
int dp[1100][1100];

int knapsack(int i,int mx_w)
{
    if(i<0) return 0;
    if(weight[i]<=mx_w)
    {
        int op1=knapsack(i-1,mx_w-weight[i])+val[i];
        int op2=knapsack(i-1,mx_w);
        dp[i][mx_w]=max(op1,op2);
        return dp[i][mx_w];
    }
    else 
    {
        return dp[i][mx_w]=knapsack(i-1,mx_w);
    }
}
int main()
{
    cin >> n >> max_weight;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < max_weight; j++)
            dp[i][j] = -1;

    for (int i = 0; i < n; i++)
        cin >> weight[i] >> val[i];

    cout << knapsack(n-1,max_weight) << endl;
    return 0;
}