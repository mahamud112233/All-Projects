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
        string s ;
        cin >> s;
        bool f=false;
        int ii,jj;
        vector<pair<int,int>> a;
        for(int i=0;i<n-1;i++)
        {
            if(f=false && s[i]!=s[i+1])
            {
                f=true;
                ii=i+1;
            }
            else if(f && s[i]!=s[j])
            {
                jj=ii;
                ii=i+1;
                a.push_back({ii,jj});
            }
        }
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            int mx=*max_element(v.begin()+a[i].first,v.begin()+a[i].second+1);
            int mm=*max_element()
        }
    }
    return 0;
}