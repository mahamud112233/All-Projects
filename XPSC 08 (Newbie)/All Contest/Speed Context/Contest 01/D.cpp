#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        double sm = 100.0 / a, lg = 225.0 / b;
        if (sm > lg)
            cout << "Small\n";
        else if (sm == lg)
            cout << "Equal\n";
        else
            cout << "Large\n";
    }
    return 0;
}