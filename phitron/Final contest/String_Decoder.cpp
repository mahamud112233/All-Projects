#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,ss;
        cin >> s;
        for(int i=0;i<s.size();i+=2)
        {
            char c=s[i];
            int m=s[i+1]-'0';
            while(m--)
            {
                ss.push_back(c);
            }
        }
        cout << ss << "\n";
    }
    return 0;
}