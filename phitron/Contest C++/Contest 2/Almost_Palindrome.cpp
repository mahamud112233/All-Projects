#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cin.ignore();
    while (a--)
    {
        string s;
        cin >> s;
        char l[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            l[s[i] - 97]++;
        }
        int c = 0;
        for (int i = 0; i < 26; i++)
        {
            if (l[i] % 2 == 1)
            {
                c++;
            }
        }
        cout << max(0,c-1) << endl;
    }
    return 0;
}