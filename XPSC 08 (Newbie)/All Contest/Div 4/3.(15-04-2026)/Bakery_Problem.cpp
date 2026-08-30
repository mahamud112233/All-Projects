#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    if(n*100>(k+n*60))
    {
        cout << k+n*60 << endl;
    }
    else cout << n*100 << endl;
    return 0;
}