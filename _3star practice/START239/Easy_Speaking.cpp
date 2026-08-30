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
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool f = false;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                ans++;
            }
            else
            {
                ans = 0;
            }
            if (ans >= 4)
            {
                f = true;
                break;
            }
        }
        if (f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}