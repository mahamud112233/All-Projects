#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            mp[i]++;
            n/=i;
        }
    }
    if(n>1)
    {
        mp[n]++;
    }
    for(auto [a,b]:mp)
    {
        cout << a << "->" << b << '\n';
    }
    return 0;
}