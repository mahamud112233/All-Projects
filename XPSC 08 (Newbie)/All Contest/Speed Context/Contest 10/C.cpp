#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int m1=m%n,m2=n-m1;
        if(m/n>=1) cout << min(m1,m2) << '\n';
        else cout << m2 << '\n';

    }
    return 0;
}