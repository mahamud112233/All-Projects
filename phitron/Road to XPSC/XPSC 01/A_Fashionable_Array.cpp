#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if ((v[0] + v[a - 1]) % 2 == 0)
            {
                cout << 0 << endl;
                continue;
            }

        int c = 0;
        for (int i = 0; i < a - 1; i++)
        {
            if ((v[i] + v[a - 1]) % 2 == 0)
            {
                break;
            }
            else
            {
                c++;
            }
        }
        int c1 = 0;
        for (int i = a-1; i >=0 ; i--)
        {
            if ((v[i] + v[0]) % 2 == 0)
            {
                break;
            }
            else
            {
                c1++;
            }
        }
        cout << min(c,c1) << endl;
    }
    return 0;
}