#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n ;
        string s;
        cin >> s;
        int co=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') co++;
            else break;
        }
        cout << co << '\n';
    }
    return 0;
}