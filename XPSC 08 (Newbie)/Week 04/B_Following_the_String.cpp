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
        map<int,int> mp;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            int le=mp[v[i]]-1;
            s.push_back(le+'a');
        }
        cout << s << endl;
    }
    return 0;
}