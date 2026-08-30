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
        long long int n, c;
        cin >> n >> c;
        long long int i = 1;
        while (1)
        {
            long long int ab = c * i;
            if (ab % n == 0)
            {
                cout << ab / n << "\n";
                break;
            }
            i++;
        }
    }
    return 0;
}