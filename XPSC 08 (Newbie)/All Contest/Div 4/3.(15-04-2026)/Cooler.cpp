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
        int n,m;
        cin >> n >> m;
        int time=0;
        for(int i=n;i>m;i--)
        {
            time+=i;
        }
        cout << time << endl;
    }
    return 0;
}