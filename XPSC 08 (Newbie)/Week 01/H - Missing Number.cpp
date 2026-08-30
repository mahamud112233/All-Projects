#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        v[x] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}