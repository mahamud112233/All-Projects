#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<bool> v(26, false);
    for (int i = 0; i < s.size(); i++)
    {
        if (v[s[i] - 'a'] == false)
        {
            v[s[i] - 'a'] = true;
        }
    }
    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == false)
        {
            cout << char(i + 'a') << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "None" << endl;
    return 0;
}