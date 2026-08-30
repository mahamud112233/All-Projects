#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin >> a;
    double re = a * (20.0 / 100);
    double j = (100 / re);
    int k = j;
    double m = j / k;
    if (m > .50)
    {
        cout << k + 1 << endl;
    }
    else
    {
        cout << k << endl;
    }
    return 0;
}