#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=1e6+1;
    vector<int> v(n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
           v[j]++;
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << v[n] <<'\n';
    }
    return 0;
}