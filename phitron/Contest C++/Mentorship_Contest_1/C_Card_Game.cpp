#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        if (x > 2)
        {
            int c = n % 2;
            int b = x % 2;
            if ((c == 1 && b == 1)  )
            {
                cout << (x / 2) << endl;
            }
            else if ((c == 0 && b == 0) || (c == 0 && b == 1) || (c == 1 && b == 0))
            {
                cout << (x / 2) - 1 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}