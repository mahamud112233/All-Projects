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
        vector<int> v(n),b(n);
        int to=0;
        for(int i=0;i<n;i++)
        {
             cin >> v[i];
             to+=v[i];
        }
        for(int i=0;i<n;i++) cin >> b[i];
        int mn=v[0]-b[0];
        int idx=0;
        for(int i=1;i<n;i++)
        {
            if(v[i]-b[i]<mn)
            {
                mn=v[i]-b[i];
                idx=i;
            }
        }
        to=to-mn;
        cout << to << '\n';
    }
    return 0;
}