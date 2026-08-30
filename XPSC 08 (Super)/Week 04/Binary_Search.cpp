#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++) cin >> v[i];
    int item;
    cin >> item;
    int l=0,r=n-1,m=0;
    while((v[m]!=item) && (l<=r))
    {
        m=(l+r)/2;
        if(v[m]>item)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    if(v[m]!=item)
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Found\n";
    }
    return 0;
}