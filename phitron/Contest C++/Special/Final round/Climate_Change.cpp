#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<long long int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + v[i];
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (pre[i] == (pre[n - 1] - pre[i]))
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}