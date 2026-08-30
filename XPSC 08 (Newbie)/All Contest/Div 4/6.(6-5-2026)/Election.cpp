#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    int ans=(n/2)+1;
    if(ans>k)
        cout << abs(k-ans) << endl;
    else 
    cout << 0 << endl;
    return 0;
}