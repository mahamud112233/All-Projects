#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int av = (a + b + c) / 3;
        if ((a + b + c) % 3 == 0)
        {
            int need = (av - a) + (av - b);
            int re = c - b;
            if (need <= re)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}