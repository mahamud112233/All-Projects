#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int sum=0;
        int sum1=0;
        for (int i=0;i<s.size();i++)
        {
            if(i<3)
            {
                sum=sum+(s[i]-'0');
            }
            else
            {
                sum1=sum1+(s[i]-'0');
            }
        }
        sum==sum1 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}