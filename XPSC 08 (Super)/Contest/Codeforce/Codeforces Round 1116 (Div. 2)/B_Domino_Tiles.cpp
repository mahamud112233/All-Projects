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
        string s;
        cin >> s;
        vector<bool> ans(4, true);
        deque<char> a, b, c, d;
        c.push_back('1');
        d.push_back('0');
        bool f = true;
        for (int i = 0; i < n;)
        {
            if (i + 1 < n)
            {
                if (f)
                {
                    a.push_back('0');
                    a.push_back('0');
                    b.push_back('1');
                    b.push_back('1');
                    c.push_back('0');
                    c.push_back('0');
                    d.push_back('1');
                    d.push_back('1');
                    f = false;
                }
                else if (!f)
                {
                    a.push_back('1');
                    a.push_back('1');
                    b.push_back('0');
                    b.push_back('0');
                    c.push_back('1');
                    c.push_back('1');
                    d.push_back('0');
                    d.push_back('0');
                    f = true;
                }
                i += 2;
            }
            else if (i + 1 == n)
            {
                if (f)
                {
                    a.push_back('0');
                    b.push_back('1');
                    c.push_back('0');
                    d.push_back('1');
                }
                else if (!f)
                {
                    a.push_back('1');
                    b.push_back('0');
                    c.push_back('1');
                    d.push_back('0');
                }
                i++;
            }
        }
        c.pop_back();
        d.pop_back();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                continue;
            if(ans[0] && s[i]!=a[i])
                ans[0]=false;
            if(ans[1] && s[i]!=b[i])
                ans[1]=false;
            if(ans[2] && s[i]!=c[i])
                ans[2]=false;
            if(ans[3] && s[i]!=d[i])
                ans[3]=false;
        }
        int to=0;
        for(int i=0;i<4;i++)
        {
            if(ans[i]) to++;
        }
        cout << to << '\n';
    }
    return 0;
}