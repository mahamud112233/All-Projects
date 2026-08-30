#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), g(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> g[i];
        int m;
        cin >> m;
        vector<int> v_m(m);
        for (int i = 0; i < m; i++)
            cin >> v_m[i];
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != g[i])
            {
                c.push_back(g[i]);
            }
        }
        int last=v_m[m-1];
        int f=0;
        for(int x:g)
        {
            if(x==last)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (c.empty())
        {
            cout << "YES" << endl;
            continue;
        }
        if (m < c.size())
        {
            cout << "NO" << endl;
            continue;
        }
        map<int, int> mp;
        int flag = 1;
        for (int i = 0; i < m; i++)
        {
            mp[v_m[i]]++;
        }

        for (int i = 0; i < c.size(); i++)
        {
            if (mp[c[i]] > 0)
            {
                mp[c[i]]--;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}