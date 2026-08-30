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
        vector<vector<int>> v(11,vector<int>(11));
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin >> s;
            int a=s[0]-'a';
            int b=s[1]-'a';
            for(int j=0;j<11;j++)
            {
                if(j!=b) ans+=v[a][j];
            }
            for(int j=0;j<11;j++)
            {
                if(j!=a) ans+=v[j][b];
            }
            v[a][b]++;
        }
        cout << ans << endl;
    }
    return 0;
}