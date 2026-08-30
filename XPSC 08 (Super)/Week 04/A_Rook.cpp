#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        int n;
        cin >> a >> n;
        for (int i = 1; i <= 8; i++)
        {
            if (i == n)
                continue;
            cout << a << i << '\n';
        }
        for(int i=0;i<=7;i++)
        {
            if(a==('a'+i))
            continue;
            cout << (char)('a'+i) << n << '\n';
        }
    }
    return 0;
}