#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        string s;
        cin >> a >> s;
       
        vector<int> s1(26,0);
        s1[s[0]-'A']++;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                s1[s[i]-'A']++;
            }
            
        }
        bool flag=true;
        for(int x:s1)
        {
            if(x>1)
            {
                flag=false;
                break;
            }
        }
        flag==true ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}