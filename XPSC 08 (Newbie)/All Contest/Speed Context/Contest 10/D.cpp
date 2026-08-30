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
        int one=0,two=0;
        for(int i=0;i<n;i++) 
        {
            cin >> v[i];
            if(v[i]==1) one++;
            else if(v[i]==2) two++;
        }
        int ans1=one/2,ans2=two;
        if(one%2==1)
        {
            cout << ans2 << '\n';
        }
        else
        {
            cout << min(ans1,ans2) << '\n';
        }
        
    }
    return 0;
}