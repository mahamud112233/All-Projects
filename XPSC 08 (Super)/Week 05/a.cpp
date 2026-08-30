#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int item;
    cin >> item;
    int l = 0, r = n - 1, m;
    int f=0;
    while (l <= r)
    {
        m = (l + r) / 2;

        if (arr[m] == item)
        {
            f=1;
            break;
        }
        else if (arr[m] > item)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    if (f!=1)
        cout << "Not Found\n";
    else
        cout << "Found\n";
    cout << __gcd(12,16);
    return 0;
}