#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<long long int> val1, val2;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            val1.push_back(v[i]);
        else
            val2.push_back(v[i]);
    }
    sort(val1.begin(), val1.end(), greater<long long int>());
    sort(val2.begin(), val2.end(), greater<long long int>());
    long long ans = 0;

    if (n == 1 && v[0] % 2 == 0)
    {
        cout << v[0];
        return 0;
    }
    else if (n == 1 && v[0] % 2 == 1)
    {
        cout << -1;
        return 0;
    }
    if (val1.size() == 1 && val2.size() == 1)
    {
        cout << val1[0];
    }
    else if (val1.empty() && val2.size() > 1)
    {
        cout << val2[0] + val2[1];
    }
    else if (val2.empty() && val1.size() > 1)
    {
        cout << val1[0] + val1[1];
    }
    else if (val1.size() == 1 && val2.size() > 1)
    {
        cout << max(val1[0], val2[0] + val2[1]);
    }
    else if (val2.size() == 1 && val1.size() > 1)
    {
        cout << val1[0] + val1[1];
    }
    else if (val1.size() > 1 && val2.size() > 1)
    {
        cout << max(val1[0] + val1[1], val2[0] + val2[1]);
    }
    return 0;
}