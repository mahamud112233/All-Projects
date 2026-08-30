#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin >> a >> b;
    if(a>b) cout << "Alice\n";
    else if(a<b) cout << "Bob\n";
    else cout << "Draw\n";
    return 0;
}