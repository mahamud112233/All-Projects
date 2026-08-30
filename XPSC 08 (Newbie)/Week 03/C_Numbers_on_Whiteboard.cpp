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
        if(n==2)
        {
            cout << 2 << endl;
            cout << 2 << " " << 1 << endl;
            continue;
        }
        vector<pair<int, int>> v;
        v.push_back({n - 2, n});
        v.push_back({n - 1, n - 1});
        for (int i = n - 3; i > 0; i--)
        {
            v.push_back({i+2,i});
        }
        cout << 2 << endl;
        for(auto it:v)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}