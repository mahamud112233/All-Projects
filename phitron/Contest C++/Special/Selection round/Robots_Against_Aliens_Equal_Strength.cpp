#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> mat(n, vector<long long>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    long long target = -1;
    for (int i = 0; i < n; i++)
    {
        long long row_sum = 0;
        bool has_zero = false;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
                has_zero = true;
            else
                row_sum += mat[i][j];
        }

        if (!has_zero)
        {
            if (target == -1)
                target = row_sum;
            else if (row_sum != target)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
