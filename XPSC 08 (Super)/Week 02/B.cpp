#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v[n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            v[j].push_back(i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout << "Divisors of " << i << " : ";
        for(int j=0;j<v[i].size();j++)
        {
            cout << v[i][j] << ' ';
        }
        cout  << '\n';
    }
    return 0;
}