#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v(t);
    int p = 0, n = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
        if (v[i] == -1)
            n++;
        else if (v[i] == 1)
            p++;
    }
    int dis = abs(p - n);
    int co = 0;
    if (dis % 2 == 0)
        co = dis / 2;
    else if (dis % 2 == 1)
    {
        co = (dis / 2) + 1;
    }

    cout << co << endl;
    return 0;
}