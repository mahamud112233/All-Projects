#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> ar(7);
        int sum=0;
        for(int i=0;i<7;i++)
        {
            cin >> ar[i];
            sum+=ar[i];
        }
        int m=INT_MIN;
        for(int i=0;i<7;i++)
        {
            m=max(ar[i],m);
        }
        int ans=sum-(m*2);
        cout << ans*(-1) << endl;
        
    }
    return 0;
}