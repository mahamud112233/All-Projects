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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ope = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                ope++;
                for (int j = i + 1; j < n; j++)
                {
                    i = j;
                    if (v[j] > 0)
                    {
                        break;
                    }
                }
            }
        }
        long long int sum = 0;
        for (auto xx : v)
        {
            sum += abs(xx);
        }

        cout << sum << " " << ope << endl;
    }
    return 0;
}