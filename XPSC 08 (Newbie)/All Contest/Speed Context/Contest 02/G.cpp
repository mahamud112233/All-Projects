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
        bool f=true;
        for(auto [a,b]:mp)
        {
            if(b%a!=0)
            {
                f=false;
                break;
            }
        }
        f? cout << "YES\n": cout << "NO\n";
    }
    return 0;
}