#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char b;
    double c;
    cin >> a >> b >> c;
    cout << a << endl
         << b << endl
         << fixed << setprecision(2) << c << endl;

    // char b er assci value te convart
    int d = b;// (or) cout << endl << (int)b;
    cout << endl 
         << d;
    
    return 0;
}