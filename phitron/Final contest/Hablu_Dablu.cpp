#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int mx = v[0];
    for (int i = 0; i < n; i++)
    {
        if (mx < v[i])
            mx = v[i];
    }
    long long int mk=mx-1;
    long long int m_h = (mk*(mk+1))/2;
    if (h > m_h)
        cout << "Hablu\n";
    else
        cout << "Dablu\n";
    return 0;
}