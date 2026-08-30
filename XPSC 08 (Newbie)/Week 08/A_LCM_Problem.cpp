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
        int l,r;
        cin >> l >> r;
        if(r-l<l)
        {
            cout << -1 << " " << -1 << '\n';
            continue;
        }
        cout << l << " " << l*2 << '\n';
        
    }
    return 0;
}