#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> arr(n, vector<long long>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<long long int> v1;

    for (int i = 0; i < n; i++)
    {
        long long int sum = 0;
        int tem = 1;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
            if (arr[i][j] == 0)
            {
                tem = 0;
            }
        }
        if (tem != 0)
        {
            v1.push_back(sum);
        }
    }
    if (v1.empty())
    {
        cout << "YES" << endl;
        return 0;
    }

    int found = 1;
    for (int i = 0; i < v1.size() - 1; i++)
    {
        if (v1[i] != v1[i + 1])
        {
            found = 0;
        }
    }
    found == 1 ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}