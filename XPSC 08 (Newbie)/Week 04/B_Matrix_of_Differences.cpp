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
        int mat[n][n];
        int ans = 1;
        int start = 1;
        int end = n * n;
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                for (int j = 0; j < n; j++)
                {
                    if (f)
                        mat[j][i] = start++;
                    else
                        mat[j][i] = end--;
                    f = !f;
                }
            else
                for (int j = n - 1; j >= 0; j--)
                {
                    if (f)
                        mat[j][i] = start++;
                    else
                        mat[j][i] = end--;
                    f = !f;
                }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}