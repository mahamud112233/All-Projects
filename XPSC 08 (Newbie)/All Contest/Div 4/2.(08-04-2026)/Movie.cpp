#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,a,b,c;
        cin >> n >> m >> a >> b >> c;
        int com=(min(n,m)*c);
        if(n>m) com=com+(n-m)*a;
        else com=com+(m-n)*b;
        if(com<=((n*a)+(m*b))) cout << com << endl;
        else cout << (n*a)+(m*b) << endl;
    }
    return 0;
}