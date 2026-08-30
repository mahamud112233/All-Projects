#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin  >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x  >> y >> z;
        if(y>=z)
        {
            cout << -1 << "\n";
            continue;
        }
        int aa=z-y;
        int i=0,to=0;
        while(to<x)
        {
            to+=aa;
            i++;
        }
        
        cout << i << '\n';
    }
    return 0;
}