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
        int n,x;
        cin >> n >> x;
        int to=0;
        for(int i=x+1;i<=n;i++)
        {
            to+=(i-x);
        }
        cout << to << '\n';
    }
    return 0;
}