#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int m = 0;
        int a = 0;
        if (y % 2 == 1)
        {
            m = y / 2 + 1;
            a = 7 * (m - 1) + 11;
        }
        else
        {
            m = y / 2;
            a = 7 * m;
        }
        if(x>a)
        {
            int b=x-a;
            int n=0;
            if(b%15==0)
            {
                n=b/15;
                m=m+n;
            }
            else
            {
                n=b/15;
                m=m+n+1;
            }
        }
        cout << m << endl;
    }
    return 0;
}