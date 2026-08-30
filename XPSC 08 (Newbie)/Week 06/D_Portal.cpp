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
        int n, x, y;
        cin >> n >> x >> y;
        deque<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int xx;
            cin >> xx;
            if (i < x || i >= y)
                b.push_back(xx);
            else
                a.push_back(xx);
        }
        int mn = *min_element(a.begin(), a.end());
        while (a[0] != mn && a.size() > 1)
        {
            a.push_back(a.front());
            a.erase(a.begin());
        }
        deque<int> ans;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] < mn)
            {
                ans.push_back(b[i]);
                b.erase(b.begin());
                i--;
            }
            else
                break;
        }
        ans.insert(ans.end(), a.begin(), a.end());
        ans.insert(ans.end(), b.begin(), b.end());
        for (int ii : ans)
        {
            cout << ii << " ";
        }
        cout << "\n";
    }
    return 0;
}