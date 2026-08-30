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
        int a1 = 0;
        int a0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                a1++;
            }
            else
            {
                a0++;
            }
        }
        int count=a0*(a1+1)+a1*(a1-1);
        cout << count << endl;
    }
    return 0;
}