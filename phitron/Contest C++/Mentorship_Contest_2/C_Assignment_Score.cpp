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
        for(int i=0;i<n;i++) cin >> v[i];
        int t=0;
        for(int i=0;i<n;i++) t+=v[i];
        int need=50*(n+1);
        int r=need-t;
        if(r>100) cout << -1 << endl;
        else if(r<0) cout << 0 << endl;
        else cout << r << endl;
    }
    return 0;
}