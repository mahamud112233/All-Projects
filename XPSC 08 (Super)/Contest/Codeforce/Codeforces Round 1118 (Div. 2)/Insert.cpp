#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int x, id;
    cin >> x >> id;
    for (int i = n - 1; i >= id; i--)
    {
       
        v[i + 1] = v[i];
         if (i == id)
        {
            v[i] = x;
            break;
        }
    }
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
    return 0;
}