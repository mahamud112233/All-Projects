#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int d, r;
    d = b / a;
    r = b % a;
    cout << d << " " << r << endl;
    return 0;
}