#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,z;
    cin >> x >> y >> z;
    int sum1=(2*x)+(3*y);
    int sum2=(2*z)+y;
    if(sum1>sum2)
    {
        cout << sum2 << endl;
    }
    else
    {
        cout << sum1 << endl;
    }
    return 0;
}