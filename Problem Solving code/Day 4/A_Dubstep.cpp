#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss, sa;
    cin >> s;
    int flag=0;
    for (int i = 0; i < s.size();)
    {
        if ((i + 2) < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (flag==1)
            {
                ss.push_back(' ');
                flag=0;
            }
            i += 3;
        }
        else
        {
            ss.push_back(s[i]);
            i++;
            flag=1;
        }
    }
    if (!ss.empty() && ss.back() == ' ')
    {
        ss.pop_back();
    }
    cout << ss << endl;
    return 0;
}