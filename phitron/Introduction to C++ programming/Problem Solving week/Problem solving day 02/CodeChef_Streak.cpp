#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int om = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]>0)
            {
                om++;
                o=max(om,o);
            }
            else
            {
                om=0;
            }
        }
        int addy = 0, ad=0;
        for (int i = 0; i < n; i++)
        {
            if(b[i]> 0)
            {
                addy++;
                ad=max(addy,ad);
            }
            else
            {
                addy=0;
            }
        }

        if (o > ad)
        {
            cout << "OM" << endl;
        }
        else if (o < ad)
        {
            cout << "ADDY" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}