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
        int n,x;
        cin >> n >> x;
        float ans=(n/10.0)*x;
        cout << ans << endl;
    }
    return 0;
}