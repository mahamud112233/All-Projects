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
        int r=n/2,l=r-1;
        bool f=true;
        for(int i=l,j=r;i>=0;i--,j++)
        {
            if(v[l]-v[i]!=v[j]-v[r])
            {
                f=false;
                break;
            }
        }
        if(f) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}