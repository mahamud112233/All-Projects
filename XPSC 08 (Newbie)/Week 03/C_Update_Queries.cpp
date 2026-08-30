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
        int n, m;
        cin >> n >> m;
        string s, c;
        cin >> s;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cin >> c;
        sort(c.begin(),c.end());
        int j = 0;
        while (!st.empty())
        {
            int idx = *st.begin();
            st.erase(idx);
            s[idx-1] = c[j];
            j++;
        }
        cout << s << endl;
    }
    return 0;
}