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
        string s, ss;
        cin >> s >> ss;
        if (s == ss)
        {
            cout << "YES\n";
            continue;
        }
        int o=0,z=0,o1=0,z1=0;
        int ev=0,ev1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') o++;
            else z++;
            if(ss[i]=='1') o1++;
            else z1++;
            if(i%2==0)
            {
                if(s[i]=='1') ev++;
                if(ss[i]=='1') ev1++;
            }
        }
        if(o==o1 && ev==ev1)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}