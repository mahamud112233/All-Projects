#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(int i=0;i<n;i++)
        {
            int a;
            string s;
            cin >> a >> s;
            int w=v[i];
            for(int i=a-1;i>=0;i--)
            {
                if(s[i]=='U' && w==0) w=9;
                else if(s[i]=='D' && w==9) w=0;
                else if(s[i]=='U') w-=1;
                else if(s[i]=='D') w+=1;
            }
            cout << w << " ";
        }
        cout << endl;
    }
    return 0;
}