#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                count = 2;
                break;
            }
            else if(s[i]=='.')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}