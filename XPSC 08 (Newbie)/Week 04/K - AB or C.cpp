#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        for(int i=0;i<n;i++)
        {
            int a,b,c;
            cin >> a >> b >> c;
            vector<int> tem={a,b,c};
            sort(tem.begin(),tem.end());
            v[i]=tem;
        }
        multiset<pair<int,int>> m;
        for(int i=0;i<n;i++)
        {
            m.insert({v[i].front(),i});
        }
        vector<int> id(n);
        int ans=INT_MAX;
        while(1)
        {
            auto mn=m.begin();
            auto mx=m.rbegin();
            int mn_e=mn->first;
            int mx_e=mx->first;
            ans=min(ans,mx_e-mn_e);

            int ind=mn->second;
            m.erase(mn);
            id[ind]++;
            if(id[ind]==3)
                break;

            m.insert({v[ind][id[ind]],ind});
        }
        cout << ans << endl;
    }
    return 0;
}