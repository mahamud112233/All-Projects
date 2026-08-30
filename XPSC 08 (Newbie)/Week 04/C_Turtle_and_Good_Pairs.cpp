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
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<n;i++) 
        {
            mp[s[i]]++;
        }
        string ans;
        while(!mp.empty())
        {
            vector<char> v;
            for(auto [l,f]:mp)
            {
                ans.push_back(l);
                mp[l]--;
                if(mp[l]==0)
                {
                    v.push_back(l);
                }
            }
            for( auto de:v)
            {
                mp.erase(de);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}