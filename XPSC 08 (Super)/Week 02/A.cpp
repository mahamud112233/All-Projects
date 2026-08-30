#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])
            continue;
        for(int j=i+i;j<=n;j+=i)
        {
            v[j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(!v[i])
        {
            cout << i << ' ';
        }
    }
    cout << '\n';
    return 0;
}