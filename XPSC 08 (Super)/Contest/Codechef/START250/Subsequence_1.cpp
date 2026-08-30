#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        bool a=true,b=false;
        int f=0,f1=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a && v[i]==f+1)
            {
                f=v[i];
                b=true;
            }
            else if(b && f1+1==v[i])
            {
                f1=v[i];
            }
            if(f==f1)
            {
                ans+=f;
                f=f1;
                f1=0;
            }
        }
        cout << ans+f+f1 << '\n';
    }
    return 0;
}