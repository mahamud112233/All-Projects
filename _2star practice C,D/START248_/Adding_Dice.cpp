#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    int xx=9-x;
    if(xx>=1 && xx<7)
        cout << "Yes\n";
    else cout << "No\n";
    return 0;
}