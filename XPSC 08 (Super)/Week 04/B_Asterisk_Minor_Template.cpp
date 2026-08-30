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
        string a, b;
        cin >> a >> b;
        if(a==b)
        {
            cout << "YES\n" << a << '\n';
            continue;
        }
        else if (a[0] == b[0])
        {
            cout << "YES\n" << a[0] << '*' << '\n';
            continue;
        }
        else if (a[a.size() - 1] == b[b.size() - 1])
        {
            cout << "YES\n*"
                 << a[a.size()-1]  << '\n';
            continue;
        }
        bool f = false;
        string ans;
        for (int i = 1; i < a.size(); i++)
        {
            string tem;
            tem.push_back(a[i - 1]);
            tem.push_back(a[i]);
            for (int j = 1; j < b.size(); j++)
            {
                string te;
                te.push_back(b[j - 1]);
                te.push_back(b[j]);
                if (tem == te)
                {
                    f = true;
                    ans = tem;
                    break;
                }
            }
            if (f)
                break;
        }
        if (f)
        {
            cout << "YES\n*" << ans << "*\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}