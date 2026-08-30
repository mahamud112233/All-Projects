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
        int r,b,g;
        cin >> r >> b >> g;
        int mn=min({r,b,g});
        cout << (mn*10)+((r-mn)*3)+((b-mn)*3)+((g-mn)*3) << endl;
    }
    return 0;
}