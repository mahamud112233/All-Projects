#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s;
        s1.push_back(s[0]);
        for (int i = 1; i < s.size();)
        {
            if (s[i + 1] != NULL)
            {
                if (s[i] == s[i + 1])
                {
                    s1.push_back(s[i]);
                    i += 2;
                }
            }
            else
            {
                s1.push_back(s[i]);
                i++;
            }
        }
        cout << s1 << endl;
    }
    return 0;
}