#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n==0) 
        {
            cout << 0 << '\n';
            continue;
        }
        int to=1;
        char lst=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]!=lst)
            {
                to++;
            }
            lst=s[i];
        }
        int ans=to;
        for(int i=1;i<n-1;i++)
        {
            int cur=to;

            if(s[i-1]!=s[i] && s[i]!=s[i+1] )
            {
                cur--;
                if(s[i-1]==s[i+1])
                {
                    cur--;
                }
            }
            ans=min(ans,cur);
        }
        
        cout << ans << '\n';
    }
    return 0;
}