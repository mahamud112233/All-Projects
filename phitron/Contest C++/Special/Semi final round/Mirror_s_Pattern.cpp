#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    if(n==1)
    {
        cout << n << endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        cout << i;
    }
    cout << endl;
    for(int i=2,j=n-1;i<n;i++,j--)
    {
        cout << i ;
        for(int k=n-2;k>0;k--)
        {
            cout << " ";
        }
        cout << j << endl;
    }
    for(int i=n;i>0;i--)
    {
        cout << i ;
    }
    return 0;
}