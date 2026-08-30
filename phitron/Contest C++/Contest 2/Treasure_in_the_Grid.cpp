#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,q;
    cin >> n >> m >> q;
    int arr[n][m];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i=0;i<q;i++)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum=0;
        for(int j=x1;j<=x2;j++)
        {
            for(int k=y1;k<=y2;k++)
            {
                sum= sum + arr[j][k];
            }
        }
        cout << sum << endl;
    }
    return 0;
}