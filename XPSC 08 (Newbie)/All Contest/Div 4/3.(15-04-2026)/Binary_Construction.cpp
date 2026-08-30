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
        int n;
        cin >> n;
        if(n==2)
        {
            cout << "01" << endl;
            continue;
        }
        string s;
        s.push_back('0');
        for (int i = 1; i < n-1; i++)
        {
           s.push_back('1');
        }
        s.push_back('0');
        cout << s << endl;
    }
    return 0;
}