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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int need=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='W') need++;
        }
        int ans=need;
        for(int i=0,j=k;j<n;j++,i++)
        {
            if(s[i]=='B' && s[j]=='W')
            {
                need++;
            }
            else if(s[i]=='W' && s[j]=='B')
            {
                need--;
            }
            if(need<ans)
                ans=need;
        }
        cout << ans << endl;
    }
    return 0;
}