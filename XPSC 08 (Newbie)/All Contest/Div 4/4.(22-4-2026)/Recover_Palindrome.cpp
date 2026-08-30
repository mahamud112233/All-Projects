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
        bool f=true;
        for(int i=0,j=n-1;i<=j;i++,j--)
        {
            if(s[i]=='?' && s[j]=='?')
            {
                f=false;
                break;
            }
        }
        if(f==true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}