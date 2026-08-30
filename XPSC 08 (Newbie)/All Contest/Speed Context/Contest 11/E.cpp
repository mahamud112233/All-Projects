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
        int n;
        cin >> n ;
        int co=0;
        for(int i=2;i<n;i+=2)
        {
            int te=n-i;
            co+=(te-1);
        }
        cout << co << '\n';
    }
    return 0;
}