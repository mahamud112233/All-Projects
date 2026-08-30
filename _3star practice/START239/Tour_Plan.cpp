#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin >> x >> y >> z;
    if(z>50)
    {
        cout << x+(y*(z-50)) << '\n';
    }
    else
    cout << x << '\n';
    return 0;
}