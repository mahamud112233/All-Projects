#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> v(n+1),v1(m+1);
        for(int i=1;i<=n;i++)
        {
            cin >> v[i];
        }
        for(int i=1;i<=m;i++)
        {
            cin >> v1[i];
        }
        int c=0;
        for(int i=1;i<=m;i++)
        {
            if(v[v1[i]]==0)
            {
                c++;
            }
            else
            {
                v[v1[i]]--;
            }
        }
        cout << c << endl;
    }
    return 0;
}