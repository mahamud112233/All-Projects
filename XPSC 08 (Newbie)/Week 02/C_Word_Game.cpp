#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<string>> v(n,vector<string>(3)) ;
        map<string,int> mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> v[j][i];
                mp[v[j][i]]++;
            }
        }
        for(int i=0;i<3;i++)
        {
            int con=0;
            for(int j=0;j<n;j++)
            {
                int value=mp[v[j][i]];
                if(value==1) con+=3;
                else if(value==2) con+=1;
            }
            cout << con;
            if(i<2) cout  << " ";
        }
        cout << endl;
        
    }
    return 0;
}