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
        cin >> n;
        string s;
        cin >> s;
        vector<bool> b(26,false);
        string ss;
        for(int i=0;i<n;i++)
        {
            if(b[s[i]-'a']==false)
            {
                ss.push_back(s[i]);
                b[s[i]-'a']=true;
            }
        }
        sort(ss.begin(),ss.end());
        map<char,char> m,mp;
        for(int i=0,j=ss.size()-1;i<=j;i++,j--)
        {
            m[ss[i]]=ss[j];
            mp[ss[j]]=ss[i];
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            if(m.count(s[i])) ans.push_back(m[s[i]]);
            else if(mp.count(s[i])) ans.push_back(mp[s[i]]);
        }
        cout << ans << endl;
    }
    return 0;
}