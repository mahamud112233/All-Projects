#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            if (s.back() != 'x')
                s.push_back('x');
            else
                s.push_back('z');
            cout << s << endl;
            continue;
        }
        bool flag = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1] && flag == true)
            {
                if (s[i] != 'z')
                {
                    s.insert(i, 1, 'z');
                    flag = false;
                }
                else
                {
                    s.insert(i, 1, 'x');
                    flag = false;
                }
                        }
        }
        if (flag == true)
        {
            if (s.back() != 'x')
                s.push_back('x');
            else
                s.push_back('z');
        }
        cout << s << endl;
    }
    return 0;
}