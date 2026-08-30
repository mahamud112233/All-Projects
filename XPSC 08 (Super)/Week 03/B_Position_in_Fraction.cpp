#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;
    double ab=(double)a/b;
    for(int i=10,pos=1;i<1000000001;i*=10,pos++)
    {
        double tw=ab*i;
        long long it=tw;
        if(it%10==c)
        {
            cout << pos << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}