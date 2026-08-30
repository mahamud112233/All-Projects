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
        string s,ss,ans;
        cin >> s >> ss;
        for(int i=0;i<5;i++)
        {
            if(s[i]==ss[i])
            {
                ans.push_back('G');
            }
            else
            ans.push_back('B');
        }
        cout << ans << '\n';
        
    }
    return 0;
}