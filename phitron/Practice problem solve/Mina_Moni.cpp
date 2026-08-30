#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i < n; i++)
        {
            if (sum1 < sum2)
            {
                sum1 += v[i];
            }
            else
            {
                sum2 += v[i];
            }
        }
        if (n % 2 == 0)
        {
            cout << abs((sum1 + v[0]) - sum2) << endl;
        }
        else
        {
            int a1 = abs((sum2 + v[0]) - sum1);
            int a2 = abs((sum1 + v[0] - sum2));
            cout << min(a1, a2) << endl;
        }
    }
    return 0;
}