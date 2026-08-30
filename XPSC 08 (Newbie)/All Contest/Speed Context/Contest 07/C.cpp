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
        
        string s(n,'1');
        s[0]='0';
        s[n-1]='0';
        cout << s << '\n';
    }
    return 0;
}