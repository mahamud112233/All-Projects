#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    if (n>=0 && n<5) cout << n*100 << endl;
    else if(n>=5) cout << n*85 << endl;
    return 0;
}