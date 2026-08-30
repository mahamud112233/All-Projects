#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,ss;
    cin >> s >> ss;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=ss[i])
        {
            c++;
            ss[i]=s[i];
        }
    }
    cout << c << endl;
    return 0;
}