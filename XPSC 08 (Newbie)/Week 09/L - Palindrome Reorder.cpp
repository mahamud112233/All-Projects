#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++)
        v[s[i] - 'A']++;

    int od = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] % 2 == 1)
            od++;
    }
    if ((s.size() % 2 == 0 && od == 0) || (s.size() % 2 == 1 && od == 1))
    {
        string f, l;
        int odd = -1;
        for (int i = 0; i < 26; i++)
        {
            if (v[i] % 2 == 1)
            {
                odd = i;
                continue;
            }
            int j = 1;
            for (; j <= v[i] / 2; j++)
            {
                f.push_back(char(i + 'A'));
            }
            for (; j <= v[i]; j++)
            {
                l.push_back(char(i + 'A'));
            }
        }
        if (odd > -1)
            for (int k = 0; k < v[odd]; k++)
            {
                l.push_back(char(odd + 'A'));
            }
        reverse(l.begin(),l.end());
        for (auto xx : f)
            cout << xx;
        for (auto xx : l)
            cout << xx;
        cout << '\n';
    }
    else
    {
        cout << "NO SOLUTION\n";
    }
    return 0;
}