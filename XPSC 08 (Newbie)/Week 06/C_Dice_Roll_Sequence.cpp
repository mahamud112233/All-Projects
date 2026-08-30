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
        int co = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] + v[i + 1] == 7)
            {
                co++;
                i++;
            }
            else if (v[i] == v[i + 1])
            {
                co++;
                i++;
            }
        }
        cout << co << "\n";
    }
    return 0;
}