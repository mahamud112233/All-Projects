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
        vector<int> v1, v2, v3, v4;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0 && v[i] % 3 == 0)
            {
                v1.push_back(v[i]);
            }
            else if (v[i] % 2 == 0)
            {
                v2.push_back(v[i]);
            }
            else if (v[i] % 3 == 0)
            {
                v3.push_back(v[i]);
            }
            else
            {
                v4.push_back(v[i]);
            }
        }
        for (int x : v1)
        {
            cout << x << " ";
        }

        for (int x : v2)
        {
            cout << x << " ";
        }

        for (int x : v4)
        {
            cout << x << " ";
        }

        for (int x : v3)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}