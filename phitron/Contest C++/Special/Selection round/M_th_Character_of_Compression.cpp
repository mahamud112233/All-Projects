#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int m;
    cin >> s >> m;

    long long f = 0;
    char ch;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i]<='z')
        {
            f++;
            ch = s[i];
        }
        else if(s[i]>'1' && s[i]<='9')
        {
            f += s[i] - '1';
            ch = s[i - 1];
        }
        if (f >= m)
        {
            break;
        }
    }
    cout << ch << endl;
    return 0;
}