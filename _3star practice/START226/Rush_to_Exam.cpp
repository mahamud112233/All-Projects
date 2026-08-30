#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,a;
    cin >> n >> m >> a;
    if(a*n>=m) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}