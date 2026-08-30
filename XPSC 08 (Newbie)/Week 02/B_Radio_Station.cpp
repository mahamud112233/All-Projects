#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    map<string,string> mp;
    for(int i=0;i<n;i++)
    {
        string s,ss;
        cin >> s >> ss;
        ss.push_back(';');
        mp[ss]=s;
    }
    for(int i=0;i<m;i++)
    {
        string a,aa;
        cin >> a >> aa;
        if(mp.count(aa))
        {
            cout << a << " " << aa << " #" << mp[aa] << endl;
        }
    }
    
    return 0;
}