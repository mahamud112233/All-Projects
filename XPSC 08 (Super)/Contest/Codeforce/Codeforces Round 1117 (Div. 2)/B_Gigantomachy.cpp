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
        int n,m;
        cin >> n >> m;
        vector<int> v(n),v1(m);
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<m;i++) cin >> v1[i];
        int be=*min_element(v.begin(),v.end());
        int ver=*min_element(v1.begin(),v1.end());
        int b_m=be,v_m=ver;
        for(int i=0;i<n-1;i++)
        {
            be+=(v[i]-v[i+1]+1);
        }
        for(int i=0;i<m-1;i++)
        {
            ver+=(v1[i]-v1[i+1]+1);
        }
        if(be>=ver)
        {
            cout << 1 << '\n';
        }
        else 
        {
            cout << 2 << '\n';
        }
    }
    return 0;
}