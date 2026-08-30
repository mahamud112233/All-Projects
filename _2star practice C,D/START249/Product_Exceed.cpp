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
        cin >> x >> y >> z;
        int i=0,to=x*y;
        while(to<z)
        {
            int a=(x+1)*y;
            int b=(y+1)*x;
            if(a>b)
            {
                to=a;
                x++;
            }
            else
            {
                to=b;
                y++;
            }
            i++;
        }
        cout << i << '\n';
    }
    return 0;
}