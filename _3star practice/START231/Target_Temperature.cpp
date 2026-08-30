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
        int mx=INT_MIN;
        for(int i=0;i<n;i++) 
        {
            cin >> v[i];
            mp[v[i]]++;
            if(mx<v[i])
            {
                mx=v[i];
            }
        }
        bool f=true;
        for(auto [a,b]:mp)
        {
            if(mx==a) continue;
            if(b>1) 
            {
                f=false;
                break;
            }
        }
        f? cout << "Yes\n" : cout << "No\n";
        
    }
    return 0;
}