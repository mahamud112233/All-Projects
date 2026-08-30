#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0;
        if (a > 1)
            sum = a - 1;
        if (c > b)
        {
            int sum1 = (c - b) + (c - 1);
            if (sum == sum1)
                cout << 3 << endl;
            else if (sum < sum1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else 
        {
            int sum2 = b - 1;
            if (sum == sum2)
                cout << 3 << endl;
            else if (sum < sum2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}