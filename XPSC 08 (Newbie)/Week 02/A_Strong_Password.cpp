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
        string s;
        cin >> s;
        bool b = false;
        int id = s.size() - 1;
        if (s[0] != 'z' && s[0] == s[1] && s[0] == s[2])
        {
            s.insert(2, 1, 'z');
            cout << s << endl;
            continue;
        }
        else if (s[0] != 'x' && s[0] == s[1] && s[0] == s[2])
        {
            s.insert(2, 1, 'x');
            cout << s << endl;
            continue;
        }
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                b = true;
                id = i;
                break;
            }
        }
        if (b == true && s[id] != 'x')
            s.insert(id, 1, 'x');
        else if (b == true && s[id] != 'z')
            s.insert(id, 1, 'z');
        else if (b == false && s[id] != 'x')
            s.push_back('x');
        else if (b == false && s[id] != 'z')
            s.push_back('z');
        cout << s << endl;
    }
    return 0;
}