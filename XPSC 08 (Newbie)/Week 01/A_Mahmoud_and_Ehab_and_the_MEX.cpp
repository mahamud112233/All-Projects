#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(101,-1);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[a]=a;
    }
    int ans=0;
    for(int i=0;i<x;i++)
    {
        if(v[i]==-1)
            ans++;
    }
    if(v[x]!=-1) cout << ans+1 << endl;
    else cout << ans <<endl;
    return 0;
}