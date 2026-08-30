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
        string a1, b1;
        bool bb = true;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        int one_c = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (one_c <= one / 2)
                {
                    a1.push_back('(');
                    b1.push_back('(');
                    one_c++;
                }
                else
                {
                    a1.push_back(')');
                    b1.push_back(')');
                    one_c++;
                }
            }
            else
            {
                if (bb)
                {
                    a1.push_back('(');
                    b1.push_back(')');
                    bb = false;
                }
                else
                {
                    a1.push_back(')');
                    b1.push_back('(');
                    bb = true;
                }
            }
        }
        if (s[0] == '1' && s[n - 1] == '1' && one % 2 == 0 && zero % 2 == 0)
        {
            cout << "YES\n";
            for (auto xx : a1)
                cout << xx;
            cout << endl;
            for (auto xx : b1)
                cout << xx;
            cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}