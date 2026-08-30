#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k < n)
        {
            cout << "No\n";
            continue;
        }
        if (k % n == 0)
        {
            cout << "Yes\n";
            for (int i = 0; i < n; i++)
            {
                cout << k / n << " ";
            }
            cout << '\n';
        }
        else if (n % 2 == 1)
        {
            cout << "Yes\n";
            for (int i = 0; i < n - 1; i++)
            {
                cout << k / n << " ";
            }
            cout << (k / n) + (k % n) << " ";
            cout << '\n';
        }
        else if (n % 2 == 0 && (k % n) % 2 == 0)
        {
            cout << "Yes\n";
            for (int i = 0; i < n - 2; i++)
            {
                cout << k / n << " ";
            }
            cout << (k / n) + ((k % n) / 2) << " ";
            cout << (k / n) + ((k % n) / 2) << " ";
            cout << '\n';
        }
        else
            cout << "No\n";
    }
    return 0;
}