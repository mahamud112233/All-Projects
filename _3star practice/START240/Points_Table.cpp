#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x > a)
        cout << "Alice\n";
    else if (a > x)
        cout << "Bob\n";
    else if (y > b)
        cout << "Alice\n";
    else if (b > y)
        cout << "Bob\n";
    else
         cout << "Alice\n";
    return 0;
}