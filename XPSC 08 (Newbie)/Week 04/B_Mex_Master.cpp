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
        map<int,int> mp;
        for(int i=0;i<n;i++) 
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        if(mp[0] <=( n+1)/2)
        {
            cout << 0 << endl;
        }
        else if(mp.count(1)==0 || mp.upper_bound(1)!=mp.end())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}