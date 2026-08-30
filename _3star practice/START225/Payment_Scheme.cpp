#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    if((x*4)+100<300)
    {
        cout << (4*x)+100 << '\n';
    }
    else cout << 300 << '\n';
    return 0;
}