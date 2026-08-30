#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    for (int i = 0; i < n; i++)
        mat[i][i] = 1;
    while (e--)
    {
        int r, c;
        cin >> r >> c;
        mat[r][c] = 1;
        mat[c][r] = 1; // directed hole ai line hobe na;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}