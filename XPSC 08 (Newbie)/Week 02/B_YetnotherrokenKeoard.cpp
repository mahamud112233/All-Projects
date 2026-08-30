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
        vector<bool> rev(s.size(), false);
        vector<int> law_id, up_id;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                rev[i] = true;
                if (!up_id.empty())
                {
                    rev[up_id.back()] = true;
                    up_id.pop_back();
                }
            }
            else if (s[i] == 'b')
            {
                rev[i] = true;
                if (!law_id.empty())
                {
                    rev[law_id.back()] = true;
                    law_id.pop_back();
                }
            }
            else
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                    up_id.push_back(i);
                else if (s[i] >= 'a' && s[i] <= 'z')
                    law_id.push_back(i);
            }
        }
        string ss;
        for (int i = 0; i < s.size(); i++)
        {
            if (rev[i] == false)
            {
                ss.push_back(s[i]);
            }
        }
        if (ss.empty())
            cout << endl;
        else
            cout << ss << endl;
    }
    return 0;
}