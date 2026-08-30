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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int id, val;
                cin >> id >> val;
                v[id - 1] = val;
            }
            else
            {
                int l, r;
                cin >> l >> r;
                l--;
                r--;
                int len = r - l + 1;
                vector<int> de;
                while (l <= r)
                {
                    de.push_back(v[l]);
                    l++;
                }
                int mid = (de.size()) / 2;

                nth_element(de.begin(), de.begin() + mid, de.end());
                cout << de[mid] << '\n';
            }
        }
    }
    return 0;
}