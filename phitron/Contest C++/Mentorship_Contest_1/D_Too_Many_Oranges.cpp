#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int o, s;
        cin >> o >> s;
        int mx = o * 12;
        int mn = o * 10;
        if (mn <= s && s <= mx)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}