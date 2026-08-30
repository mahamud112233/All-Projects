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
        vector<int> ans;
        ans.push_back(0);
        int c = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (c >= v[i])
            {
                ans.push_back(v[i]);
            }
            else if (c < v[i])
            {
                ans.push_back(c);
                c++;
            }
        }
        ans.push_back(min(c,v[n-1]));
        for (auto xx : ans)
        {
            cout << xx << " ";
        }
        cout << endl;
    }
    return 0;
}