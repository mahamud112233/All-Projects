#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,ss;
        cin >> s >> ss;
        if(s.size()!=ss.size())
        {
             cout << "NO" << endl;
             continue;
        }
        int s1[26],s2[26];
        memset(s1,0,sizeof(s1));
        memset(s2,0,sizeof(s2));
        for(int i=0;i<s.size();i++)
        {
            s1[s[i]-97]++;
        }
        for(int i=0;i<ss.size();i++)
        {
            s2[ss[i]-97]++;
        }
        bool flag=false;
        for(int i=0;i<26;i++)
        {
            if(s1[i]!=s2[i])
            {
                flag=true;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}