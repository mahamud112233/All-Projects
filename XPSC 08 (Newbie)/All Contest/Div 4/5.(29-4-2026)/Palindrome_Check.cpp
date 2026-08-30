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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool f = true;
        for (auto i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (v[i] != v[j])
            {
                if(v[i]==k)
                {
                    j++;
                }
                else if(v[j]==k)
                {
                    i--;
                }
                else if (v[i] != k && v[j] != k)
                {
                    f = false;
                    break;
                }
            }
        }
        f == true ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}