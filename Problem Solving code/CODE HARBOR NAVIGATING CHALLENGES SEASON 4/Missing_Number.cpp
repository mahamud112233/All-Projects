#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<bool> v(n+1,false);
    for(int i=1;i<n;i++)
    {
        int x;
        cin >> x;
        v[x]=true;
    }
    int ans=-1;
    for(int i=1;i<n+1;i++)
    {
        if(!v[i])
        {
            ans=i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}