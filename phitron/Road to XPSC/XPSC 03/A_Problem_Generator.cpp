#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        char  s[n];
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
        }
        vector<int> ss(7,0);
        for (int i=0;i<n;i++)
        {
            ss[s[i]-'A']++;
        }
        int count=0;
        for(int i=0;i<7;i++)
        {
            if(ss[i]>m)
            {
                ss[i]=m;
            }
            count=count+(m-ss[i]);
        }
        cout << count << endl;
    }
    return 0;
}