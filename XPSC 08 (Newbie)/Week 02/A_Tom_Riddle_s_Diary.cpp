#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string,bool> mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if(mp.count(s) && mp[s]==true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            mp[s]=true;
        }
    }
    return 0;
}