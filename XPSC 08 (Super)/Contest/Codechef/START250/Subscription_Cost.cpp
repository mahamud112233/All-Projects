#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        if(n<=3)
        {
            cout << n*x << '\n';
        }
        else if(n>3)
        {
            cout << (3*x)+((n-3)*y) << '\n';
        }
    }
    return 0;
}