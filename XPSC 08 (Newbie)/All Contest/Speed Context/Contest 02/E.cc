#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        long long int a,b;
        cin >> a >> b;
        long long int aa=a*a;
        long long int bb=2*b;
        if(aa==bb) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}