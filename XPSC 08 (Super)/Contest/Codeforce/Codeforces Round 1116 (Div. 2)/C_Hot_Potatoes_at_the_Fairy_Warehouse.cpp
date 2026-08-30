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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int to = count(s.begin(), s.end(), '1');
        int op = 0;
        string tem = s;
        for (int i = 0; i < s.size(); i += 2)
        {
            if (tem[i] == '1' && tem[i + 1] == '0')
            {
                op++;
                swap(tem[i], tem[i + 1]);
            }
        }
        bool f = false;
        if (tem[tem.size() - 1] == '1' && tem[0] == '0')
        {
            op++;
            f = true;
            swap(tem[tem.size() - 1], tem[0]);
        }
        if (op == 0)
        {
            if (s[0] == '1')
            {
                cout << n << ' ' << n << '\n';
            }
            else
                cout << 0 << ' ' << 0 << '\n';
            continue;
        }
        int need = k%(op*2);
        string ss;
        int i = 0;
        int co = 0;
        if (need >= op)
        {
            ss = tem;
            if (f)
                i = 2;
            co = op;
        }
        else
            ss = s;
        for (; i < s.size(); i += 2)
        {
            if (co == need)
                break;
            if (ss[i] == '1' && ss[i + 1] == '0')
            {
                co++;
                swap(ss[i], ss[i + 1]);
            }
        }
        int odd = 0;
        for (int i = 0; i < ss.size(); i += 2)
        {
            if (ss[i] == '1')
                odd++;
        }
        cout << to - odd << ' ' << odd << '\n';
    }
    return 0;
}