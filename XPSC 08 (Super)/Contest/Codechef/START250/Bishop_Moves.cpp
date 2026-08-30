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
        int x,y,x1,y1;
        cin >> x >> y >>x1 >> y1;
        if(x==x1 && y==y1)
        {
            cout << 0 <<'\n';
        }
        else if(x+y==x1+y1 || x-y==x1-y1)
        {
            cout << 1 << '\n';
        }
        else if(((x+y)%2)!=((x1+y1)%2))
        {
            cout << -1 << '\n';
        }
        else cout << 2 << '\n';
        
    }
    return 0;
}