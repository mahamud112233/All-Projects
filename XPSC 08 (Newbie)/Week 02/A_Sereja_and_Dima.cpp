#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int s = 0;
    int d = 0;
    int f = 0;
    for (int l = 0, r = n - 1; r >= l;)
    {
        if (v[l] > v[r])
        {
            if (f == 0)
            {
                s += v[l];
                l++;
                f = 1;
            }
            else
            {
                d += v[l];
                l++;
                f = 0;
            }
        }
        else
        {
            if (f == 1)
            {
                d += v[r];
                r--;
                f = 0;
            }
            else
            {
                s += v[r];
                r--;
                f = 1;
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}