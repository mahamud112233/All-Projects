#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        map<int,pair<int,pair<int,int>>> m;
        int rem=-1;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            m[v[i]].first++;
            if(m[v[i]].first==1)
            {
                m[v[i]].second.first=i;
            }
            else if(m[v[i]].first==2)
            {
                m[v[i]].second.second=i;
                if(rem<m[v[i]].second.first) 
                rem=m[v[i]].second.first;
                f=true;
            }
            else if(m[v[i]].first>2)
            {
                int tem=m[v[i]].second.second;
                m[v[i]].second.second=i;
                m[v[i]].second.first=tem;
                if(rem<tem) rem=tem;
            }
        }
        if(f==true) cout << rem+1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}