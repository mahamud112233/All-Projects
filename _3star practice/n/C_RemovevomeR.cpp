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
        string re;
        re.push_back(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (re.back() != s[i])
                re.push_back(s[i]);
        }

        if (re.size() == 2)
        {
            cout << 2 << '\n';
        }
        else
            cout << 1 << '\n';
    }
    return 0;
}