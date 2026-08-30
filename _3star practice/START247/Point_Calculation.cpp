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
        for (int i = 1; i < n; i++)
        {
            ans.push_back(min(v[i - 1], v[i]));
        }
        cout << *max_element(ans.begin(), ans.end()) << '\n';
    }
    return 0;
}