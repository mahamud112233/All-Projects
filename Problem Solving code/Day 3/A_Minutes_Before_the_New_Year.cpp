#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h,m;
        cin >> h >> m;
        int re=(23-h)*60+(59-m)+1;
        cout << re << endl;
    }
    return 0;
}