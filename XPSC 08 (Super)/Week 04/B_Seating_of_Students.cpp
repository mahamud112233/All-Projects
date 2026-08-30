#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if ((n == 1 && m == 2) || (n == 2 && m == 1))
    {
        cout << "NO\n";
        return 0;
    }
    int val=1,val1=2;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            {
                v[i][j]=val;
                val+=2;
            }
        }
        else
        {
            for(int j=m-1;j>=0;j--)
            {
                v[i][j]=val1;
                val1+=2;
            }
        }
    }
    cout << "YES\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout << v[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}