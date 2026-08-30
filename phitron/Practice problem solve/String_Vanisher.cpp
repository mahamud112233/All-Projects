#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c=0;
        while(n)
        {
            n/=2;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}