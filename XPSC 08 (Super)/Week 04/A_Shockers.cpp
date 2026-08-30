#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    set<char> ss;
    for (char a = 'a'; a <= 'z'; a++)
        ss.insert(a);
    for (int i = 1; i <= n; i++)
    {
        char c;
        string s;
        cin >> c >> s;
        if (ss.size() == 1)
        {
            if (c == '?' && !ss.count(s[0]))
            {
                ans++;
            }
            else if (c == '!')
                ans++;
        }
        else if (c == '!')
        {
            set<char> tem;
            for (int j = 0; j < s.size(); j++)
                if (ss.count(s[j]))
                    tem.insert(s[j]);
            ss.clear();
            ss = tem;
        }
        else if (c == '.')
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (ss.count(s[j]))
                    ss.erase(s[j]);
            }
        }
        else if (c == '?')
        {
            if (ss.count(s[0]))
                ss.erase(s[0]);
        }
    }
    cout << ans << '\n';
    return 0;
}