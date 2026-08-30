#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // find min or max.
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    cout << min({a, b, c, d, e, f, g}) << endl
         << max({a, b, c, d, e, f, g});

    // change or swap value.
    int n, m;
    cin >> n >> m;
    swap(n, m);
    cout << n << endl << m;

    return 0;
}