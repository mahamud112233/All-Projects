#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int m;
    cin >> s >> m;

    long long curr_len = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        long long repeat = 1;
        if (i + 1 < s.size() && s[i + 1] >= '2' && s[i + 1] <= '9')
        {
            repeat = s[i + 1] - '0';
            i++;
        }

        if (m <= curr_len + repeat)
        {

            cout << c << endl;
            return 0;
        }

        curr_len += repeat;
    }

    cout << -1 << endl;
    return 0;
}
